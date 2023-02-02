/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Converter.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 16:14:22 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/02 18:42:12 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <string>

class Converter {
	public:

		class InvalidLiteralException: public std::exception {
			public:
				const char* what() const throw();
		};
		
		class InvalidLiteralException: public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif
