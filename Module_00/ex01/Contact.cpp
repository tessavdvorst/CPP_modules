/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 17:06:33 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/06 18:20:16 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{
    return;
}

int Contact::contactId = 0;

int Contact::getContactId()
{
    return (this->contactId);
}

void Contact::getContactInfo(void)
{
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

    setContactId();
    std::cout << "Enter first name: ";
    std::getline(std::cin, first_name);
    setFirstName(first_name);
    std::cout << "Enter last name: ";
    std::getline(std::cin, last_name);
    setLastName(last_name);
    std::cout << "Enter nick name: ";
    std::getline(std::cin, nick_name);
    setNickName(nick_name);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, phone_number);
    setPhoneNumber(phone_number);
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkest_secret);
    setDarkestSecret(darkest_secret);
    std::cout << std::endl;
}

void Contact::setContactId(void)
{
    this->contactId++;
}

void Contact::setFirstName(std::string first_name)
{
    this->_first_name = first_name;
}

void Contact::setLastName(std::string last_name)
{    
    this->_last_name = last_name;
}

void Contact::setNickName(std::string nick_name)
{    
    this->_nick_name = nick_name;
}

void Contact::setPhoneNumber(std::string phone_number)
{    
    this->_phone_number = phone_number;
}

void Contact::setDarkestSecret(std::string darkest_secret)
{    
    this->_darkest_secret = darkest_secret;
}

std::string Contact::getFirstName(void)
{
    return (this->_first_name);
}

std::string Contact::getLastName(void)
{
    return (this->_last_name);
}

std::string Contact::getNickName(void)
{
    return (this->_nick_name);
}

std::string Contact::getPhoneNumber(void)
{
    return (this->_phone_number);
}

std::string Contact::getDarkestSecret(void)
{
    return (this->_darkest_secret);
}
