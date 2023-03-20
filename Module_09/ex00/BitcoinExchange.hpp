/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/15 14:31:07 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/20 13:28:44 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include "utils.hpp"
#include <exception>

enum ErrorCode {
	BAD_INPUT,
	NON_POSITIVE,
	TOO_LARGE
};

class BTC {
	private:
		const std::string _fileName;
		std::map<std::vector<int>, float> _database;
		
		BTC();

	public:
		BTC(std::string fileName);
		BTC(const BTC& that);
		~BTC();

		BTC& operator=(const BTC& that);

		class InvalidDatabaseException: public std::exception {
            public:
                const char* what() const throw() {return "could not load database";};
        };
		
		class InvalidFileException: public std::exception {
            public:
                const char* what() const throw() {return "could not open file";};
        };
		
		class NoDataFoundException: public std::exception {
            public:
                const char* what() const throw() {return "no data found on this date";};
        };

		class InvalidSyntaxException: public std::exception {
			private:
				ErrorCode _err;
				
			public:
				InvalidSyntaxException(ErrorCode err): _err(err) {}
				ErrorCode getErrorCode() const { return (this->_err); }
		};
		
		bool								init_database(void);
		void								fill_in_between_days(std::string line);
		bool								load_file(void);
		void								check_syntax(std::string line);
		void								check_date(std::vector<int> date);
		void								check_amount(std::string str);
		void								display_output(std::string entry);
		void								handle_exception(ErrorCode err, std::string line);
		
		float								get_amount(std::string entry);
		float								get_price(std::vector<int> date);
		std::string							get_date(std::string entry);
		std::pair<std::vector<int>, float>	split_into_pair(std::string entry, char d);
};

#endif
