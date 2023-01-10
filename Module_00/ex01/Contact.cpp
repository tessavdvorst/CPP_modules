/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 17:06:33 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/10 14:24:13 by tvan-der      ########   odam.nl         */
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

// bool isEmptyField(std::string input)
// {
//     size_t i = 0;
//     size_t count = 0;
    
//     while (i < input.length())
//     {
//         if (input[i] == '\n' || input[i] == '\t' || input[i] == ' ')
//             count++;
//         i++;
//     }
//     if (count == i)
//         return (true);
//     return (false);
// }

bool Contact::askUserInput(std::string prompt, std::string type)
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
    if (!askUserInput("Enter first name: ", "firstname"))
        return (false);
    if (!askUserInput("Enter last name: ", "lastname"))
        return (false);
    if (!askUserInput("Enter nick name: ", "nickname"))
        return (false);
    if (!askUserInput("Enter phone number: ", "phonenum"))
        return (false);
    if (!askUserInput("Enter darkest secret: ", "darksecret"))
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