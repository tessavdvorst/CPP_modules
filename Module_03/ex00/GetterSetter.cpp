/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   GetterSetter.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 17:10:42 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/20 17:10:59 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::setName(const std::string& name)
{
    this->_name = name;
}

void ClapTrap::setHitPoints(const int points)
{
    this->_hitPoints = points;
}

void ClapTrap::setEnergyPoints(const int points)
{
    this->_energyPoints = points;
}

void ClapTrap::setAttackDamage(const int points)
{
    this->_attackDamage = points;
}

std::string ClapTrap::getName(void) const
{
    return (this->_name);
}

int ClapTrap::getHitPoints(void) const
{
    return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints(void) const
{
    return (this->_energyPoints);
}

int ClapTrap::getAttackDamage(void) const
{
    return (this->_attackDamage);
}