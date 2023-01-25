/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 16:57:34 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/25 15:45:00 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    this->_attribute = new Brain;
    std::cout << "Cat default constructor called\n";
    return;
}

Cat::Cat(const Cat& cat)
{
    std::cout << "Cat copy constructor called\n";
    *this = cat;
    return;
}

Cat::~Cat()
{
    delete this->_attribute;
    std::cout << "Cat default destructor called\n";
    return;
}

Cat& Cat::operator=(const Cat& cat)
{
    this->_type = cat._type;
    this->_attribute = new Brain;
    std::cout << "Cat copy assignment operator called\n";
    return (*this);
}

Brain* Cat::getBrain(void) const
{
    return (this->_attribute);
}

void Cat::makeSound(void) const
{
    std::cout << "Meow meow meow\n";
}