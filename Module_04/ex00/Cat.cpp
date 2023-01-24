/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 16:57:34 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/24 17:03:15 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    std::cout << "Cat default constructor called\n";
    return;
}

Cat::Cat(const std::string& type): Animal(type)
{
    std::cout << "Cat parameterized constructor called\n";
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
    std::cout << "Cat default destructor called\n";
    return;
}

Cat& Cat::operator=(const Cat& cat)
{
    this->_type = cat._type;
    std::cout << "Cat copy assignment operator called\n";
    return (*this);
}

void Cat::makeSound()
{
    std::cout << "Meow meow meow\n";
}