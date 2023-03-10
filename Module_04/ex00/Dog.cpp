/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 16:58:40 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/25 13:36:32 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    std::cout << "Dog default constructor called\n";
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
    std::cout << "Dog default destructor called\n";
    return;
}

Dog& Dog::operator=(const Dog& dog)
{
    this->_type = dog._type;
    std::cout << "Dog copy assignment operator called\n";
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Whoof whoof whoof\n";
}