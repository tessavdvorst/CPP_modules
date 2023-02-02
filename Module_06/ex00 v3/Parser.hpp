/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Parser.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 16:23:58 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/02 18:12:44 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_HPP
# define PARSER_HPP

#include <iostream>
#include <sstream>
#include <string>

enum LitType {
    CHAR,
    INT,
    DOUBLE,
    FLOAT
};

class Parser {
	private:
		LitType _type;
		std::string _input;

		Parser();
		Parser(const Parser& other);
		Parser& operator=(const Parser& other);
		
	public:
		Parser(const std::string input);
		~Parser();

		class InvalidTypeException: public std::exception {
			public:
				const char* what() const throw();
		};

		bool isChar(void);
		bool isInt(void);
		bool isDouble(void);
		bool isFloat(void);
		
		bool onlyOneOfChar(char c);
		LitType checkType(void);

		LitType getType(void);
};

#endif
