/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 11:52:55 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/25 13:57:16 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called\n";
    return;
}

WrongAnimal::WrongAnimal(const std::string& type): _type(type)
{
    std::cout << "WrongAnimal parameterized constructor called\n";
    return;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal)
{
    std::cout << "WrongAnimal copy constructor called\n";
    *this = wrongAnimal;
    return;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal default destructor called\n";
    return;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimal)
{
    this->_type = wrongAnimal._type;
    std::cout << "WrongAnimal copy assignment operator called\n";
    return (*this);
}

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "No WrongAnimal sound\n";
}