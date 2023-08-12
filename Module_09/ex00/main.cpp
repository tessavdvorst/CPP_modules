/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/15 14:30:30 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/06/25 12:16:06 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int argc, char *argv[])
{
	if (argc != 2)
		std::cerr << "Error: could not open file.\n";
	else
	{
		try {
			BTC btc(argv[1]);
			btc.load_file();
		} catch (const std::exception &e) {
			std::cerr << "Error: " << e.what() << ".\n";
		}
	}
	return (0);
}
