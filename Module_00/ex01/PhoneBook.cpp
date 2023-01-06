/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 19:22:29 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/06 18:31:36 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void)
{
    return;
}

PhoneBook::~PhoneBook(void)
{
    return;
}

void PhoneBook::printContact(Contact contact)
{ 
    std::cout << std::right << std::setw(10) << contact.getFirstName();
    // std::cout << "|";
    std::cout << std::right << std::setprecision(9) << std::setw(10) << contact.getLastName();
    // std::cout << "|";
    std::cout << std::right << std::setw(10) << contact.getNickName() << std::endl;
}

void PhoneBook::add(void)
{
    Contact contact;
    
    contact.getContactInfo();
    saveContact(contact, contact.getContactId());
}

void PhoneBook::saveContact(Contact contact, int id)
{
    this->contacts[id % 8] = contact;
}

void PhoneBook::search(void)
{
    std::cout << std::endl;
    std::cout << std::right << std::setw(10) << "Index";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "First name";
    std::cout << "|";
    std::cout << std::left << std::setw(10) << "Last name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Nickname" << std::endl;
    std::cout << "----------|----------|----------|----------" << std::endl;
    for (int i = 1; i < 8; i++)
    {
        std::cout << std::right << std::setw(10) << i;
        std::cout << "|";
        printContact(this->contacts[i]);
    }
    std::cout << std::endl;
    // std::cout << "Choose an entry index: ";
    // std::getline(std::cin, )
}
