/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 15:38:08 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/23 12:28:29 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clapTrap1;
    ClapTrap clapTrap2("Maria");
    clapTrap1 = ClapTrap("Mares");
    std::cout << "\n";
    std::cout << clapTrap1 << "\n";
    std::cout << clapTrap2 << "\n";
    clapTrap1.attack("Maria");
    clapTrap2.takeDamage(clapTrap1.getAttackDamage());
    clapTrap2.beRepaired(10);
    std::cout << "\n";
    std::cout << clapTrap1 << "\n";
    std::cout << clapTrap2 << "\n";
    clapTrap2.attack("Mares");
    clapTrap1.takeDamage(clapTrap2.getAttackDamage());
    clapTrap1.beRepaired(10);
    std::cout << "\n";
    std::cout << clapTrap1 << "\n";
    std::cout << clapTrap2 << "\n";
    clapTrap1.setEnergyPoints(0);
    clapTrap1.attack("Maria");
    std::cout << "\n";
    std::cout << clapTrap1 << "\n";
    return (0);
}