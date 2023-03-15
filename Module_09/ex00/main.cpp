/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/15 14:30:30 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/15 15:22:23 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Here is an example of an input.txt file:
// $> head input.txt
// date | value
// 2011-01-03 | 3
// 2011-01-03 | 2
// 2011-01-03 | 1
// 2011-01-03 | 1.2
// 2011-01-09 | 1
// 2012-01-11 | -1
// 2001-42-42
// 2012-01-11 | 1
// 2012-01-11 | 2147483648
// $>

// Your program will use the value in your input file and the associated date.
// Your program must display on the standard output the result of the value multiplied
// by the exchange rate according to the date indicated in your database.

// The following is an example of the program’s use.
// $> ./btc
// Error: could not open file.
// $> ./btc input.txt
// 2011-01-03 => 3 = 0.9
// 2011-01-03 => 2 = 0.6
// 2011-01-03 => 1 = 0.3
// 2011-01-03 => 1.2 = 0.36
// 2011-01-09 => 1 = 0.32
// Error: not a positive number.
// Error: bad input => 2001-42-42
// 2012-01-11 => 1 = 7.1
// Error: too large a number.
// $>

int main (int argc, char *argv[])
{
	if (argc != 2)
		std::cerr << "could not open file\n";
	else
	{
		BTC btc(argv[1]);
		try {
			btc.load_file();
		} catch (const std::exception& e) {
			std::cerr << "Error: " << e.what() << ".\n";
		}
	}
	return (0);
}