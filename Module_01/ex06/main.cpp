/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/16 13:05:45 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/17 11:35:57 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
    Harl harl;
    
    if (argc != 2)
        std::cout << "Please enter valid level to complain\n";
    else
        harl.complain(argv[1]);
    return (0);
}