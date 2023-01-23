/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 15:00:10 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/23 13:50:04 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called\n";
    return;
}

ClapTrap::ClapTrap(const std::string& name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap parameterized constructor called\n";
    return;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap)
{
    std::cout << "ClapTrap copy constructor called\n";
    *this = clapTrap;
    return;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap default destructor called\n"; 
    return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{ 
    std::cout << "ClapTrap copy assignment operator called\n";
    setName(clapTrap.getName());
    setHitPoints(clapTrap.getHitPoints());
    setEnergyPoints(clapTrap.getEnergyPoints());
    setAttackDamage(clapTrap.getAttackDamage());
    return (*this);
}

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

void ClapTrap::attack(const std::string& target)
{
    if (getEnergyPoints() > 0)
    {
        setEnergyPoints(this->_energyPoints - 1);
        std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage but loses 1 energy point!\n";
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

std::ostream& operator<<(std::ostream& output, const ClapTrap &clapTrap)
{
    output << "ClapTrap\n";
    output << "--------------------\n";
    output << "Name = " << clapTrap.getName() << "\n";
    output << "Hit points = " << clapTrap.getHitPoints() << "\n";
    output << "Energy points = " << clapTrap.getEnergyPoints() << "\n";
    output << "Attack damage = " << clapTrap.getAttackDamage() << "\n";
    return (output);
}
