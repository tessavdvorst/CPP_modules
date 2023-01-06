/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 12:51:02 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/06 17:48:15 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/* 
// implement 2 classes: PhoneBook & Contact
// 
// PhoneBook:
// - array of contacts (maximum of 8, if 9th is added -> oldest should be replaced by newest)
// 
// Contact:
// - contact fields
// 
// 1. Program should constantly run and prompt enter user input.
// 2. Only accepts ADD, SEARCH and EXIT (any other input is discarded)
// 3. If command is correctly executed, the program waits for another one.
//
// ADD:
// - prompt enter input information (one field at a time, no empty fields)
// - once all fields have been completed -> add contact to phonebook
// - contact fields: first name, last name, nickname, phone number, and darkest secret
//
// SEARCH:
// - display saved contacts of a list of 4 columns: index, first name, last name and nickname
// - each column must be 10 chars wide (right-aligned)
// - if text is longer -> truncate & replace last displayable char by '.'
// - a pipe char '|' separates the columns
// - prompt the user again for the index of the entry to display
// 
// EXIT:
// - quit program
// - delete array
*/

int main(void)
{
    PhoneBook phoneBook;
    std::string command;
    
    while(!std::cin.eof())
    {
        std::cout << "Please enter input (ADD, SEARCH, EXIT):" << std::endl;
        std::getline(std::cin, command);
        if (command == "ADD")
            phoneBook.add();
        else if (command == "SEARCH")
            phoneBook.search();
        else if (command == "EXIT")
            break;
        else
            continue;
    }
    return (0);
}