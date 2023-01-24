/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 15:00:10 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/24 10:40:08 by tvan-der      ########   odam.nl         */
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

ClapTrap::ClapTrap(std::string name, int hitpoints, int energypoints, int attackdamage)
{
    this->_name = name;
    this->_hitPoints = hitpoints;
    this->_energyPoints = energypoints;
    this->_attackDamage = attackdamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{ 
    this->_name = clapTrap._name;
    this->_hitPoints = clapTrap._hitPoints;
    this->_energyPoints = clapTrap._energyPoints;
    this->_attackDamage = clapTrap._attackDamage;
    std::cout << "ClapTrap copy assignment operator called\n";
    return (*this);
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
    if (this->_energyPoints > 0)
    {
        this->_energyPoints--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage but loses 1 energy point!\n";
    }
    else
        std::cout << "ClapTrap " << this->_name << " has not enough energy points to attack\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > (unsigned int)this->_hitPoints)
        this->_hitPoints = 0;
    else
    {
       this->_hitPoints = this->_hitPoints - amount;
       std::cout << "ClapTrap " << this->_name << " loses " << amount << " hit points\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0)
    {
        this->_hitPoints = this->_hitPoints + amount;
        this->_energyPoints--;
        std::cout << "ClapTrap " << this->_name << " gains " << amount << " hit points but loses 1 energy point\n";
    }    
    else
        std::cout << "ClapTrap " << this->_name << " has not enough energy points to repair\n";
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