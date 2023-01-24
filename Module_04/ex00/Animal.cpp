/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 15:30:42 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/24 16:55:54 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called\n";
    return;
}

Animal::Animal(const std::string& type): _type(type)
{
    std::cout << "Animal parameterized constructor called\n";
    return;
}

Animal::Animal(const Animal& animal)
{
    std::cout << "Animal copy constructor called\n";
    *this = animal;
    return;
}

Animal::~Animal()
{
    std::cout << "Animal default destructor called\n";
    return;
}

Animal& Animal::operator=(const Animal& animal)
{
    this->_type = animal._type;
    std::cout << "Animal copy assignment operator called\n";
    return (*this);
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

// std::ostream& operator<<(std::ostream& output, const Animal& animal)
// {
//     output << animal.getType();
//     return(output);
// }