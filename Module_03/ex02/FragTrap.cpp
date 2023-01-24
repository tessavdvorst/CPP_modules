/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/23 13:35:51 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/24 09:51:51 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("", 100, 100, 30)
{
    std::cout << "FragTrap default constructor called\n";
    return;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap parameterized constructor called\n";
    return;
}

FragTrap::FragTrap(const FragTrap& fragTrap)
{
    *this = fragTrap;
    std::cout << "FragTrap copy constructor called\n";
    return;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap default destructor called\n"; 
    return;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap)
{
    this->_name = fragTrap._name;
    this->_hitPoints = fragTrap._hitPoints;
    this->_energyPoints = fragTrap._energyPoints;
    this->_attackDamage = fragTrap._attackDamage;
    std::cout << "FragTrap copy assignment operator called\n";
    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    if (this->_energyPoints > 0)
    {
       this->_energyPoints--;
       std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage but loses 1 energy point!\n";
    }
    else
        std::cout << "FragTrap " << this->_name << " has not enough energy points to attack\n";
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (amount > (unsigned int)this->_hitPoints)
        this->_hitPoints = 0;
    else
    {
       this->_hitPoints = this->_hitPoints - amount;
       std::cout << "FragTrap " << this->_name << " loses " << amount << " hit points\n";
    }
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0)
    {
        this->_hitPoints = this->_hitPoints + amount;
        this->_energyPoints--;
        std::cout << "FragTrap " << this->_name << " gains " << amount << " hit points but loses 1 energy point\n";
    }    
    else
        std::cout << "FragTrap " << this->_name << " has not enough energy points to repair\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " requests high five!\n";
}

std::ostream& operator<<(std::ostream& output, const FragTrap &fragTrap)
{
    output << "FragTrap\n";
    output << "--------------------\n";
    output << "Name = " << fragTrap.getName() << "\n";
    output << "Hit points = " << fragTrap.getHitPoints() << "\n";
    output << "Energy points = " << fragTrap.getEnergyPoints() << "\n";
    output << "Attack damage = " << fragTrap.getAttackDamage() << "\n";
    return (output);
}