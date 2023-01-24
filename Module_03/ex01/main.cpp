/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 15:38:08 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/24 10:46:23 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "===========CREATION===========\n";
    ScavTrap scavTrap1;
    ScavTrap scavTrap2("Martijn");
    ClapTrap clapTrap1("Haseeb");
    scavTrap1 = ScavTrap("Tessa");
    std::cout << "\n";
    std::cout << scavTrap1 << "\n";
    std::cout << scavTrap2 << "\n";
    std::cout << clapTrap1 << "\n";
    scavTrap1.attack("Martijn");
    scavTrap2.takeDamage(scavTrap1.getAttackDamage());
    clapTrap1.attack("Tessa");
    scavTrap1.takeDamage(clapTrap1.getAttackDamage());
    std::cout << "\n";
    std::cout << scavTrap1 << "\n";
    std::cout << scavTrap2 << "\n";
    std::cout << clapTrap1 << "\n";
    scavTrap2.attack("Haseeb");
    clapTrap1.takeDamage(scavTrap2.getAttackDamage());
    std::cout << "\n";
    std::cout << scavTrap2 << "\n";
    std::cout << clapTrap1 << "\n";
    clapTrap1.beRepaired(50);
    std::cout << "\n";
    std::cout << clapTrap1 << "\n";
    scavTrap1.guardGate();
    std::cout << "\n";
    std::cout << scavTrap1 << "\n";
    std::cout << scavTrap2 << "\n";
    std::cout << clapTrap1 << "\n";
    std::cout << "===========DESTRUCTION===========\n";
    return (0);
}