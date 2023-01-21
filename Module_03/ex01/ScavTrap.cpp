/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/21 14:28:53 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/21 16:49:03 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap default constructor called\n";
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    setGateKeeperMode(false);
    return;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
    std::cout << "ScavTrap parameterized constructor called\n";
    setName(name);
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    setGateKeeperMode(false);
    return;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap)
{
    std::cout << "ScavTrap copy constructor called\n";
    *this = scavTrap;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap default destructor called\n"; 
    return;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
    std::cout << "ScavTrap copy assignment operator called\n";
    setName(scavTrap.getName());
    setHitPoints(scavTrap.getHitPoints());
    setEnergyPoints(scavTrap.getEnergyPoints());
    setAttackDamage(scavTrap.getAttackDamage());
    return (*this);
}

void ScavTrap::setGateKeeperMode(bool mode)
{
    this->_gateKeeperMode = mode;
}

bool ScavTrap::getGateKeeperMode(void) const
{
    return (this->_gateKeeperMode);
}

void ScavTrap::attack(const std::string& target)
{
    int amountOfDamage = getHitPoints() - getAttackDamage();
    
    if (getEnergyPoints() > 0)
    {
        setEnergyPoints(getEnergyPoints() - 1);
        std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << amountOfDamage << " points of damage but loses 1 energy point!\n";
    }
    else
        std::cout << "ScavTrap " << getName() << " has not enough energy points to attack\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is in Gate keeper mode\n";
    setGateKeeperMode(true);
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
