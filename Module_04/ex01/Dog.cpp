/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 16:58:40 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/10 11:55:26 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    std::cout << "Dog default constructor called\n";
    this->_attribute = new Brain;
    return;
}

Dog::Dog(const Dog& dog)
{
    std::cout << "Dog copy constructor called\n";
    *this = dog;
    return;
}

Dog::~Dog()
{
    delete this->_attribute;
    std::cout << "Dog default destructor called\n";
    return;
}

Dog& Dog::operator=(const Dog& dog)
{
    std::cout << "Dat copy assignment operator called\n";
    this->_type = dog._type;
    delete this->_attribute;
    this->_attribute = new Brain(*(dog.getBrain()));
    return (*this);
}

Brain* Dog::getBrain(void) const
{
    return (this->_attribute);
}

void Dog::makeSound(void) const
{
    std::cout << "Whoof whoof whoof\n";
}