/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 15:00:10 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/21 16:48:43 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called\n";
    setHitPoints(10);
    setEnergyPoints(10);
    setAttackDamage(0);
    return;
}

ClapTrap::ClapTrap(const std::string& name)
{
    std::cout << "ClapTrap parameterized constructor called\n";
    setName(name);
    setHitPoints(10);
    setEnergyPoints(10);
    setAttackDamage(0);
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