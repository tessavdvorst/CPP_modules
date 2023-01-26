/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 15:30:42 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/25 13:57:04 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("No Animal type")
{
    std::cout << "Animal default constructor called\n";
    return;
}

AAnimal::AAnimal(const std::string& type): _type(type)
{
    std::cout << "Animal parameterized constructor called\n";
    return;
}

AAnimal::AAnimal(const AAnimal& animal)
{
    std::cout << "Animal copy constructor called\n";
    *this = animal;
    return;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal default destructor called\n";
    return;
}

AAnimal& AAnimal::operator=(const AAnimal& animal)
{
    this->_type = animal._type;
    std::cout << "Animal copy assignment operator called\n";
    return (*this);
}

std::string AAnimal::getType(void) const
{
    return (this->_type);
}

void AAnimal::makeSound(void) const
{
    std::cout << "No Animal sound\n";
}
