/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/15 14:31:07 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/06/25 12:57:46 by Tessa         ########   odam.nl         */
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
		std::map<int, float> _database;
		
		BTC();
		BTC(const BTC& that);

	public:
		BTC(std::string fileName);
		~BTC();

		BTC& operator=(const BTC& that);

		class InvalidDatabaseException: public std::exception {
            public:
                const char* what() const throw();
        };
		
		class InvalidFileException: public std::exception {
            public:
                const char* what() const throw();
        };
		
		class NoDataFoundException: public std::exception {
            public:
                const char* what() const throw();
        };

		class InvalidSyntaxException: public std::exception {
			private:
				ErrorCode _err;
				
			public:
				InvalidSyntaxException(ErrorCode err);
				ErrorCode getErrorCode() const;
		};
		
		bool								init_database(void);
		std::string							check_date(std::string date);
		float								check_amount(std::string str);
		bool								load_file(void);
		void								display_output(std::pair<std::string, float> entry);
		void								handle_exception(ErrorCode err, std::string line);
		float								get_price(int date);
		int									parse_date_to_int(std::string str);
		std::pair<int, float>				parse_database_entry(std::string entry, char d);
		std::pair<std::string, float>		parse_input_entry(std::string entry);
};

#endif
