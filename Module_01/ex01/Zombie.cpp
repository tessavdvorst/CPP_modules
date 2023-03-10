/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 20:10:07 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/11 21:57:55 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
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