/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/12 12:50:36 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/13 16:00:25 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// initialize the weapon object with the address of the pre made weapon object
HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
    return;
}

HumanA::~HumanA(void)
{
    return;
}

std::string HumanA::getName(void)
{
    return (this->_name);   
}

Weapon HumanA::getWeapon(void)
{
    return (this->_weapon);   
}

void HumanA::attack()
{
    std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}