/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/23 13:35:51 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/23 13:42:47 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "FragTrap default constructor called\n";
    setHitPoints(100);
    setEnergyPoints(30);
    setAttackDamage(30);
    return;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
    std::cout << "FragTrap parameterized constructor called\n";
    setName(name);
    setHitPoints(100);
    setEnergyPoints(30);
    setAttackDamage(30);
    return;
}

FragTrap::FragTrap(const FragTrap& fragTrap)
{
    std::cout << "FragTrap copy constructor called\n";
    *this = fragTrap;
    return;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap default destructor called\n"; 
    return;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap)
{
    std::cout << "FragTrap copy assignment operator called\n";
    setName(fragTrap.getName());
    setHitPoints(fragTrap.getHitPoints());
    setEnergyPoints(fragTrap.getEnergyPoints());
    setAttackDamage(fragTrap.getAttackDamage());
    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    int amountOfDamage = getHitPoints() - getAttackDamage();
    
    if (getEnergyPoints() > 0)
    {
        setEnergyPoints(getEnergyPoints() - 1);
        std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " << amountOfDamage << " points of damage but loses 1 energy point!\n";
    }
    else
        std::cout << "FragTrap " << getName() << " has not enough energy points to attack\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " requests high five!\n";
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
