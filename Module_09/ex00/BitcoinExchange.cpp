/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/15 14:31:11 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/15 15:28:39 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BTC::BTC() {
	if (!init_database())
		throw InvalidDatabaseException();
}

BTC::BTC(const std::string fileName): BTC(), _fileName(fileName) {}
// BTC::BTC(const BTC& that);
BTC::~BTC() {}

bool BTC::init_database(void)
{
	std::ifstream file("./data.csv");

	if (!file)
		return (false);
	
	return (true);
}

bool BTC::load_file(void)
{
	std::string line;
	std::ifstream file(this->_fileName);

	if (!file)
		throw InvalidFileException();
	while (getline(file, line))
	{

	}
	file.close();
	return (true);
}