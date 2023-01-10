/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 12:51:02 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/10 10:57:37 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook phoneBook;
    std::string command;
    
    while(!std::cin.eof())
    {
        std::cout << "Please enter command (ADD, SEARCH, EXIT):" << std::endl;
        std::getline(std::cin, command);
        if (command == "ADD")
            phoneBook.add();
        else if (command == "SEARCH")
            phoneBook.search();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Incorrect command.\n" << std::endl;
    }
    return (0);
}