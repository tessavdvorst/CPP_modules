/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 16:57:34 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/26 15:00:04 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal("Cat")
{
    std::cout << "Cat default constructor called\n";
    this->_attribute = new Brain;
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
    std::cout << "Cat copy assignment operator called\n";
    this->_type = cat._type;
    this->_attribute = new Brain(*(cat.getBrain()));
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