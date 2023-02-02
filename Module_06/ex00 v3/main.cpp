/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 13:24:27 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/02 18:30:33 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "OutputGenerator.hpp"

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		std::cerr << "Invalid amount of arguments. Please only insert one literal\n";
		return (1);
	}
	try {
		Parser parser(argv[1]);
		OutputGenerator generator(argv[1], parser.getType());
	} catch (const std::exception& e) {
		std::cerr << e.what();
	}
	return 0;
}



