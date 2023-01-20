/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Actions.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 17:11:03 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/20 17:11:32 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
    int amountOfDamage = getHitPoints() - getAttackDamage();
    
    if (getEnergyPoints() > 0)
    {
        setEnergyPoints(this->_energyPoints - 1);
        std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << amountOfDamage << " points of damage but loses 1 energy point!\n";
    }
    else
        std::cout << "ClapTrap " << getName() << " has not enough energy points to attack\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > (unsigned int)this->_hitPoints)
        setHitPoints(0);
    else
    {
        setHitPoints(this->_hitPoints - amount);
        std::cout << "ClapTrap " << getName() << " loses " << amount << " hit points\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (getEnergyPoints() > 0)
    {
        setHitPoints(this->_hitPoints + amount);
        setEnergyPoints(this->_energyPoints - 1);
        std::cout << "ClapTrap " << getName() << " gains " << amount << " hit points but loses 1 energy point\n";
    }    
    else
        std::cout << "ClapTrap " << getName() << " has not enough energy points to repair\n";
}