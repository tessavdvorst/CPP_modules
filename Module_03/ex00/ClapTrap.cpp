/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 15:00:10 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/20 17:11:35 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called\n";
    setHitPoints(10);
    setEnergyPoints(10);
    setAttackDamage(0);
    return;
}

ClapTrap::ClapTrap(const std::string& name)
{
    std::cout << "Parameterized constructor called\n";
    setName(name);
    setHitPoints(10);
    setEnergyPoints(10);
    setAttackDamage(0);
    return;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap)
{
    std::cout << "Copy constructor called\n";
    *this = clapTrap;
    return;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default constructor called\n"; 
    return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{ 
    std::cout << "Copy assignment operator called\n";
    setName(clapTrap.getName());
    setHitPoints(clapTrap.getHitPoints());
    setEnergyPoints(clapTrap.getEnergyPoints());
    setAttackDamage(clapTrap.getAttackDamage());
    return (*this);
}

std::ostream& operator<<(std::ostream& output, const ClapTrap &clapTrap)
{
    output << clapTrap.getName() << "\n";
    output << "--------------------\n";
    output << "Hit points = " << clapTrap.getHitPoints() << "\n";
    output << "Energy points = " << clapTrap.getEnergyPoints() << "\n";
    output << "Attack damage = " << clapTrap.getAttackDamage() << "\n";
    return (output);
}