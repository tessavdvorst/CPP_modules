/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/16 13:05:45 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/16 13:45:28 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
    Harl harl;
    
    if (argc != 2)
        std::cout << "Invalid parameter\n";
    else
        harl.complain(argv[1]);
    return (0);
}