/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 17:06:33 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/11 17:41:50 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{
    return;
}

int Contact::_contactId = 0;

int Contact::getContactId()
{
    return (this->_contactId - 1);
}

void Contact::displayContact(void)
{
    std::cout << std::endl;
    std::cout << std::left << std::setw(18) << "First name: "; 
    std::cout << getFirstName() << std::endl;
    std::cout << std::left << std::setw(18) << "Last name: ";
    std::cout << getLastName() << std::endl;
    std::cout << std::left << std::setw(18) << "Nick name: ";
    std::cout << getNickName() << std::endl;
    std::cout << std::left << std::setw(18) << "Phone number: ";
    std::cout << getPhoneNumber() << std::endl;
    std::cout << std::left << std::setw(18) << "Darkest secret: ";
    std::cout << getDarkestSecret() << std::endl;
    std::cout << std::endl;
}

bool Contact::setUserInput(std::string prompt, std::string type)
{
    std::string input;
    
    std::cout << prompt;
    std::getline(std::cin, input);
    if (input.empty())
    {
        std::cout << std::endl << "Field cannot remain empty. Please try again.\n" << std::endl; 
        return (false);
    }
    if (type == "firstname")
        setFirstName(input);
    else if (type == "lastname")
        setLastName(input);
    else if (type == "nickname")
        setNickName(input);
    else if (type == "phonenum")
        setPhoneNumber(input);
    else
        setDarkestSecret(input);
    return (true);
}    

bool Contact::getContactInfo(void)
{
    setContactId('+');
    std::cout << std::endl;
    if (!setUserInput("Enter first name: ", "firstname"))
        return (false);
    if (!setUserInput("Enter last name: ", "lastname"))
        return (false);
    if (!setUserInput("Enter nick name: ", "nickname"))
        return (false);
    if (!setUserInput("Enter phone number: ", "phonenum"))
        return (false);
    if (!setUserInput("Enter darkest secret: ", "darksecret"))
        return (false);
    std::cout << std::endl;
    return (true);
}

void Contact::setContactId(char c)
{
    if (c == '-')
        this->_contactId--;
    else
        this->_contactId++;
}

void Contact::setFirstName(std::string firstName)
{
    this->_firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{    
    this->_lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{    
    this->_nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{    
    this->_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{    
    this->_darkestSecret = darkestSecret;
}

std::string Contact::getFirstName(void)
{
    return (this->_firstName);
}

std::string Contact::getLastName(void)
{
    return (this->_lastName);
}

std::string Contact::getNickName(void)
{
    return (this->_nickName);
}

std::string Contact::getPhoneNumber(void)
{
    return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void)
{
    return (this->_darkestSecret);
}