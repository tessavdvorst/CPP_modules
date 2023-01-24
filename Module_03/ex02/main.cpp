/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 15:38:08 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/24 10:46:08 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    std::cout << "===========CREATION===========\n";
    FragTrap fragTrap1;
    ScavTrap scavTrap1("Martijn");
    ClapTrap clapTrap1("Haseeb");
    fragTrap1 = FragTrap("Tessa");
    std::cout << "\n";
    std::cout << fragTrap1 << "\n";
    std::cout << scavTrap1 << "\n";
    std::cout << clapTrap1 << "\n";
    fragTrap1.attack("Martijn");
    scavTrap1.takeDamage(fragTrap1.getAttackDamage());
    clapTrap1.attack("Martijn");
    scavTrap1.takeDamage(clapTrap1.getAttackDamage());
    std::cout << "\n";
    std::cout << fragTrap1 << "\n";
    std::cout << scavTrap1 << "\n";
    std::cout << clapTrap1 << "\n";
    for (int i = 0; i < 3; i++)
    {
        fragTrap1.attack("Martijn");
        scavTrap1.takeDamage(fragTrap1.getAttackDamage());
    }
    clapTrap1.attack("Martijn");
    scavTrap1.takeDamage(clapTrap1.getAttackDamage());
    std::cout << "\n";
    std::cout << fragTrap1 << "\n";
    std::cout << scavTrap1 << "\n";
    std::cout << clapTrap1 << "\n";
    fragTrap1.highFivesGuys();
    std::cout << "===========DESTRUCTION===========\n";
    return (0);
}