/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 11:56:30 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/25 13:36:21 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called\n";
    return;
}

WrongCat::WrongCat(const WrongCat& wrongCat)
{
    std::cout << "WrongCat copy constructor called\n";
    *this = wrongCat;
    return;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat default destructor called\n";
    return;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCat)
{
    this->_type = wrongCat._type;
    std::cout << "WrongCat copy assignment operator called\n";
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat meow meow meow\n";
}