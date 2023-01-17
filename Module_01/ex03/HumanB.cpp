/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/12 13:02:42 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/17 11:25:59 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
    return;
}

HumanB::~HumanB(void)
{
    return;
}

std::string HumanB::getName(void)
{
    return (this->_name);   
}

Weapon* HumanB::getWeapon(void)
{
    return (this->_weapon);   
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << getName() << " attacks with their " << getWeapon()->getType() << std::endl;
}