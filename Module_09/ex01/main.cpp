/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 13:35:28 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/20 16:09:55 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
		std::cout << "Error: invalid amount of arguments\n";
	else
	{
		RPN rpn(argv[1]);
		try {
			rpn.calculate();
		} catch (const std::exception &e) {
			std::cout << "Error: " << e.what() << '\n';
		}
	}
	return (0);
}
