/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 13:22:37 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/13 11:53:06 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Constructor called" << std::endl;
    return;
}

Zombie::~Zombie(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

std::string Zombie::getName(void)
{
    return (this->_name);
}

void Zombie::announce(void)
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}