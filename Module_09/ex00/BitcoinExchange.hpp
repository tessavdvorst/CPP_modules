/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/15 14:31:07 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/15 15:26:42 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

// You have to create a program which outputs the value of a certain amount of bitcoin
// on a certain date.
// This program must use a database in csv format which will represent bitcoin price
// over time. This database is provided with this subject.
// The program will take as input a second database, storing the different prices/dates
// to evaluate.
// Your program must respect these rules:
// • The program name is btc.
// • Your program must take a file as argument.
// • Each line in this file must use the following format: "date | value".
// • A valid date will always be in the following format: Year-Month-Day.
// • A valid value must be either a float or a positive integer between 0 and 1000
# include <iostream>
# include <fstream>
# include <string>
# include <map>
# include <vector>

class BTC {
	private:
		const std::string _fileName;
		std::map<std::string, int> _database;
		std::vector<std::vector<std::string> > _input;
		
		BTC();

	public:
		BTC(std::string fileName);
		// BTC(const BTC& that);
		~BTC();

		class InvalidDatabaseException: public std::exception {
            public:
                const char* what() const throw() {return "could not load database";};
        };
		
		class InvalidFileException: public std::exception {
            public:
                const char* what() const throw() {return "could not open file";};
        };
		
		class NotPositiveNumberException: public std::exception {
            public:
                const char* what() const throw() {return "not a positive number";};
        };
		
		class BadInputException: public std::exception {
            public:
                const char* what() const throw() {return "bad input =>";}; // pass var that is invalid
        };
		
		class TooLargeNumberException: public std::exception {
            public:
                const char* what() const throw() {return "too large a number";};
        };
		
		bool init_database(void);
		bool load_file(void);
};

#endif