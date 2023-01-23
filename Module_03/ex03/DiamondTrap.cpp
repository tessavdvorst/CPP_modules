/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/23 14:35:21 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/23 16:34:19 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap(), _name("")
{
    ClapTrap::_name = "_clap_name";
    std::cout << "DiamondTrap default constructor called\n";
    return;
}

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(), ScavTrap(), FragTrap(), _name(name)
{
    setName(name + "_clap_name");
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(30);
    std::cout << "DiamondTrap parameterized constructor called\n";
    return;
}

DiamondTrap::DiamondTrap(const DiamondTrap& DiamondTrap)
{
    std::cout << "DiamondTrap copy constructor called\n";
    *this = DiamondTrap;
    return;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap default destructor called\n"; 
    return;
}

std::string DiamondTrap::getDiamondName(void) const
{
    return (this->_name);
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
    std::cout << "DiamondTrap copy assignment operator called\n";
    this->_name = diamondTrap._name;
    this->_hitPoints = diamondTrap._hitPoints;
    this->_energyPoints = diamondTrap._energyPoints;
    this->_attackDamage = diamondTrap._attackDamage;
    return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
    int amountOfDamage = this->_hitPoints - this->_attackDamage;
    
    if (this->_energyPoints > 0)
    {
       this->_energyPoints--;
       std::cout << "DiamondTrap " << this->_name << " attacks " << target << ", causing " << amountOfDamage << " points of damage but loses 1 energy point!\n";
    }
    else
        std::cout << "DiamondTrap " << this->_name << " has not enough energy points to attack\n";
}

void DiamondTrap::takeDamage(unsigned int amount)
{
    if (amount > (unsigned int)this->_hitPoints)
        this->_hitPoints = 0;
    else
    {
       this->_hitPoints = this->_hitPoints - amount;
       std::cout << "DiamondTrap " << this->_name << " loses " << amount << " hit points\n";
    }
}

void DiamondTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0)
    {
        this->_hitPoints = this->_hitPoints + amount;
        this->_energyPoints--;
        std::cout << "DiamondTrap " << this->_name << " gains " << amount << " hit points but loses 1 energy point\n";
    }    
    else
        std::cout << "DiamondTrap " << this->_name << " has not enough energy points to repair\n";
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << "\n";
}

std::ostream& operator<<(std::ostream& output, const DiamondTrap &diamondTrap)
{
    output << "DiamondTrap\n";
    output << "--------------------\n";
    output << "Name = " << diamondTrap.getDiamondName() << "\n";
    output << "ClapTrap name = " << diamondTrap.getName() << "\n";
    output << "Hit points = " << diamondTrap.getHitPoints() << "\n";
    output << "Energy points = " << diamondTrap.getEnergyPoints() << "\n";
    output << "Attack damage = " << diamondTrap.getAttackDamage() << "\n";
    return (output);
}
