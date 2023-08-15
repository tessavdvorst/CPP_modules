/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/15 14:31:11 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/08/15 21:06:10 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// ========================= CONSTRUCTORS ============================

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

// ========================== DESTRUCTORS ============================

BTC::~BTC() {}

// ====================== ASSIGNMENT OPERATOR ========================

BTC& BTC::operator=(const BTC& that)
{
	this->_database = that._database;
	return (*this);
}

// =========================== EXCEPTIONS ============================

const char* BTC::InvalidDatabaseException::what() const throw()
{
	return ("could not load database");
}
const char* BTC::InvalidFileException::what() const throw()
{
	return ("could not open file");
}

const char* BTC::NoDataFoundException::what() const throw()
{
	return ("no data found on this date");
}

BTC::InvalidSyntaxException::InvalidSyntaxException(ErrorCode err): _err(err) {}

ErrorCode BTC::InvalidSyntaxException::getErrorCode() const
{
	return (this->_err);
}

// =========================== PARSE FUNC ============================

int BTC::parse_date_to_int(std::string str)
{
	str.erase(std::remove(str.begin(), str.end(), '-'), str.end());
	return (str_to_int(str));
}

std::pair<int, float> BTC::parse_database_entry(std::string entry, char d)
{
	float value = 0.0;
	int date = 0;
	size_t delim = entry.find_first_of(d, 0);
	
	if (delim != std::string::npos)
	{
		date = parse_date_to_int(entry.substr(0, delim));
		value = str_to_float(entry.substr(delim + 1, entry.size() - 1));
	}
	return (std::make_pair(date, value));
}

std::pair<std::string, float> BTC::parse_input_entry(std::string entry)
{
	if (std::count(entry.begin(), entry.end(), ' ') != 2)
		throw InvalidSyntaxException(BAD_INPUT);
	
	float amount = 0.0;
	std::string str, date;
	std::stringstream ss(entry);
	
	getline(ss, str, ' ');
	check_date(str);
	date = str;
	getline(ss, str, ' '); //skip delim
	getline(ss, str, ' ');
	amount = check_amount(str);
	
	return (std::make_pair(date, amount));
}

std::string BTC::check_date(std::string date)
{
	if (std::count(date.begin(), date.end(), '-') != 2)
		throw InvalidSyntaxException(BAD_INPUT);
	
	int year, month, day = 0;
	std::string str;
	std::stringstream ss(date);
	
	getline(ss, str, '-');
	year = str_to_int(str);
	getline(ss, str, '-');
	month = str_to_int(str);
	getline(ss, str, ' ');
	day = str_to_int(str);

	if ( !is_valid_date(year, month, day) 
		|| year < 2009 || year > 2022
		|| (year == 2022 && month >= 3 && day > 29))
			throw InvalidSyntaxException(BAD_INPUT);
	return (date);
}

float BTC::check_amount(std::string str)
{
	float amount = str_to_float(str);
	if (amount < 0)
		throw InvalidSyntaxException(NON_POSITIVE);
	if (amount > 1000)
		throw InvalidSyntaxException(TOO_LARGE);
	return (amount);
}

float BTC::get_price(int date)
{
	std::map<int, float>::iterator it = this->_database.begin();
	
	for (; it != this->_database.end(); it++)
	{
		if (it->first > date)
		{
			std::map<int, float>::iterator prev = std::prev(it);
			return (prev->second);
		}
	}
	throw NoDataFoundException();
}

// ============================ INIT FUNC ============================

bool BTC::init_database(void)
{
	std::string line;
	std::ifstream file("./data.csv");

	if (!file)
		return (false);
	getline(file, line);
	while (getline(file, line))
		this->_database.insert(parse_database_entry(line, ','));
	file.close();
	return (true);
}

void BTC::display_output(std::pair<std::string, float> entry)
{
	int date = parse_date_to_int(entry.first);
	std::cout << entry.first << " => " << entry.second << " = " << (entry.second * get_price(date)) << '\n';
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
			std::pair<std::string, float> entry = parse_input_entry(line);
			display_output(entry);
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

// ======================== EXCEPTION HANDLER ========================

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
