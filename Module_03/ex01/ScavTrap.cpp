/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/21 14:28:53 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/24 10:38:38 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("", 100, 50, 20), _gateKeeperMode(false)
{
    std::cout << "ScavTrap default constructor called\n";
    return;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name, 100, 50, 20), _gateKeeperMode(false)
{
    std::cout << "ScavTrap parameterized constructor called\n";
    return;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap)
{
    *this = scavTrap;
    std::cout << "ScavTrap copy constructor called\n";
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap default destructor called\n"; 
    return;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
    this->_name = scavTrap._name;
    this->_hitPoints = scavTrap._hitPoints;
    this->_energyPoints = scavTrap._energyPoints;
    this->_attackDamage = scavTrap._attackDamage;
    this->_gateKeeperMode = scavTrap._gateKeeperMode;
    std::cout << "ScavTrap copy assignment operator called\n";
    return (*this);
}

bool ScavTrap::getGateKeeperMode(void) const
{
    return (this->_gateKeeperMode);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energyPoints > 0)
    {
       this->_energyPoints--;
       std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage but loses 1 energy point!\n";
    }
    else
        std::cout << "ScavTrap " << this->_name << " has not enough energy points to attack\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (amount > (unsigned int)this->_hitPoints)
        this->_hitPoints = 0;
    else
    {
       this->_hitPoints = this->_hitPoints - amount;
       std::cout << "ScavTrap " << this->_name << " loses " << amount << " hit points\n";
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0)
    {
        this->_hitPoints = this->_hitPoints + amount;
        this->_energyPoints--;
        std::cout << "ScavTrap " << this->_name << " gains " << amount << " hit points but loses 1 energy point\n";
    }    
    else
        std::cout << "ScavTrap " << this->_name << " has not enough energy points to repair\n";
}

void ScavTrap::guardGate()
{
    this->_gateKeeperMode = true;
    std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode\n";
}

std::ostream& operator<<(std::ostream& output, const ScavTrap &scavTrap)
{
    output << "ScavTrap\n";
    output << "--------------------\n";
    output << "Name = " << scavTrap.getName() << "\n";
    output << "Hit points = " << scavTrap.getHitPoints() << "\n";
    output << "Energy points = " << scavTrap.getEnergyPoints() << "\n";
    output << "Attack damage = " << scavTrap.getAttackDamage() << "\n";
    if (scavTrap.getGateKeeperMode() == true)
        output << "Gate keeper mode = true" << "\n";
    else
        output << "Gate keeper mode = false" << "\n";
    return (output);
}
