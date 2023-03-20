/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/15 14:31:11 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/20 13:28:36 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BTC::BTC() {
	if (!init_database())
		throw InvalidDatabaseException();
}

BTC::BTC(const std::string fileName): _fileName(fileName) {
	if (!init_database())
		throw InvalidDatabaseException();
}

BTC::BTC(const BTC& that): _fileName(that._fileName)
{
	*this = that;
}

BTC::~BTC() {}

BTC& BTC::operator=(const BTC& that)
{
	this->_database = that._database;
	return (*this);
}

std::pair<std::vector<int>, float> BTC::split_into_pair(std::string entry, char d)
{
	float value = 0.0;
	std::string str_date;
	std::vector<int> date;
	size_t delim = entry.find_first_of(d, 0);
	
	if (delim != std::string::npos)
	{
		str_date = entry.substr(0, delim);
		split_into_vector(str_date, '-', date);
		value = str_to_float(entry.substr(delim + 1, entry.size() - 1));
	}
	return (std::make_pair(date, value));
}

void BTC::fill_in_between_days(std::string line)
{
	std::string str_date;
	std::vector<int> date;
	size_t delim = line.find_first_of(',', 0);
	str_date = line.substr(0, delim);
	float value = str_to_float(line.substr(delim + 1, line.size() - 1));
	split_into_vector(str_date, '-', date);
	
	for (int i = 0; i < 2; i++)
	{
		date[2] += 1;
		if (is_valid_date(date))
			this->_database.insert(std::make_pair(date, value));
	}
}

bool BTC::init_database(void)
{
	std::string line;
	std::ifstream file("./data.csv");

	if (!file)
		return (false);
	getline(file, line);
	while (getline(file, line))
	{
		this->_database.insert(split_into_pair(line, ','));
		fill_in_between_days(line);
	}
	file.close();
	return (true);
}

void BTC::check_syntax(std::string line)
{
	std::vector<int> date;
	std::vector<std::string> entry;
	
	split_into_vector(line, '|', entry);
	if (entry.size() != 2)
		throw InvalidSyntaxException(BAD_INPUT);
	
	split_into_vector(entry[0], '-', date);
	check_date(date);
	check_amount(entry[1]);
}

void BTC::check_date(std::vector<int> date)
{
	if (date.size() != 3
		|| date[0] < 2009 || date[0] > 2022
		|| !is_valid_date(date)
		|| (date[0] == 2022 && date[1] >= 3 && date[2] > 29))
			throw InvalidSyntaxException(BAD_INPUT);
}

void BTC::check_amount(std::string str)
{
	float amount = str_to_float(str);
	if (amount < 0)
		throw InvalidSyntaxException(NON_POSITIVE);
	if (amount > 1000)
		throw InvalidSyntaxException(TOO_LARGE);
}

float BTC::get_price(std::vector<int> date)
{
	std::map<std::vector<int>, float>::iterator it = this->_database.find(date);
	
	if (it == this->_database.end())
	{
		std::map<std::vector<int>, float>::iterator prev = std::prev(it);
		if (it == this->_database.end())
			throw NoDataFoundException();
		return (prev->second);
	}
	return (it->second);
}

void BTC::display_output(std::string entry)
{
	std::vector<int> date;
	std::string str_date = get_date(entry);
	float amount = get_amount(entry);
	
	split_into_vector(str_date, '-', date);
	std::cout << str_date << " => " << amount << " = " << (amount * get_price(date)) << '\n';
}

std::string BTC::get_date(std::string entry)
{
	std::string date = entry.substr(0, entry.find_first_of('|', 0));
	erase_whitespace_chars_both_sides(date);
	return (date);
}

float BTC::get_amount(std::string entry)
{
	std::string amount = entry.substr(entry.find_first_of('|', 0) + 1);
	erase_whitespace_chars_both_sides(amount);
	return (str_to_float(amount));
}

bool BTC::load_file(void)
{
	std::string line;
	std::ifstream file(this->_fileName);

	if (!file)
		throw InvalidFileException();
	getline(file, line);
	while (getline(file, line))
	{
		try {
			check_syntax(line);
			display_output(line);
		} catch (const InvalidSyntaxException &e) {
			handle_exception(e.getErrorCode(), line);
		} catch (const NoDataFoundException &e) {
			std::cerr << "Error: " << e.what() << ".\n";
		} catch (const std::exception &e) {
			handle_exception(BAD_INPUT, line);
		}
	}
	file.close();
	return (true);
}

void BTC::handle_exception(ErrorCode err, std::string line)
{
	std::cerr << "Error: ";
	
	switch(err)
	{
		case BAD_INPUT:
			std::cerr << "bad input => " << line << "\n";
			break;
		case NON_POSITIVE:
			std::cerr << "not a positive number" << ".\n";
			break;
		case TOO_LARGE:
			std::cerr << "too large a number" << ".\n";
			break;
		default:
			break;
	}
}
