/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 19:22:29 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/09 16:39:02 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook(void)
{
    return;
}

PhoneBook::~PhoneBook(void)
{
    return;
}

std::string PhoneBook::truncAndAddDot(std::string str)
{
    std::string trunc_str;
    
    if (str.length() >= 10)
    {
        trunc_str = str.substr(0,10);
        trunc_str[9] = '.';
    }
    else
        trunc_str = str;
    return (trunc_str);
}

void PhoneBook::printContactInFormat(Contact contact)
{ 
    std::cout << std::right << std::setw(10) << truncAndAddDot(contact.getFirstName());
    std::cout << "|";
    std::cout << std::right << std::setw(10) << truncAndAddDot(contact.getLastName());
    std::cout << "|";
    std::cout << std::right << std::setw(10) << truncAndAddDot(contact.getNickName());
    std::cout << std::endl;
}

void PhoneBook::add(void)
{
    Contact contact;
    
    if (!contact.getContactInfo())
        return;
    saveContact(contact, contact.getContactId());
    std::cout << std::endl << "Added contact to phonebook!" << std::endl;
}

void PhoneBook::saveContact(Contact contact, int id)
{
    std::cout << "ID = " << id << std::endl;
    this->contacts[id % 8] = contact;
}

int PhoneBook::searchEntry(std::string input)
{
    int index;
    
    std::stringstream ss(input);
    ss >> index;
    if (input.length() == 1)
        return (index);
    return (-1);
}

int PhoneBook::checkAmountContacts(Contact *contacts)
{
    for (int i = 0; i < 8; i++)
    {
        if (isEmptyField(contacts[i].getFirstName()) && \
                isEmptyField(contacts[i].getLastName()) && \
                isEmptyField(contacts[i].getNickName()) && \
                isEmptyField(contacts[i].getPhoneNumber()) && \
                isEmptyField(contacts[i].getDarkestSecret()))
            return (i);
        contacts[i].displayContact();
    }
    return (0);
}

void PhoneBook::printHeader(void)
{
    std::cout << std::endl;
    std::cout << std::right << std::setw(10) << "Index";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "First name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Last name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Nickname";
    std::cout << std::endl;
    std::cout << "----------|----------|----------|----------" << std::endl;
}

void PhoneBook::search(void)
{
    std::string input;
    
    int count = checkAmountContacts(this->contacts);
    if (count < 1)
    {
        std::cout << "hi\n";
        return;
    }
    std::cout << "COUNT = " << count << std::endl;
    printHeader();
    for (int i = 0; i < count; i++)
    {
        std::cout << std::right << std::setw(10) << (i + 1);
        std::cout << "|";
        printContactInFormat(this->contacts[i]);
    }
    std::cout << std::endl;
    std::cout << "Choose an entry index: ";
    std::getline(std::cin, input);
    int index = searchEntry(input);
    std::cout << "INDEX = " << index << std::endl;
    if (index < 1 || index > 8 || index > count)
        std::cout << "Sorry, entry does not exist" << std::endl;
    else
        this->contacts[index - 1].displayContact();
}
