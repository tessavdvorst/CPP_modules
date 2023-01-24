/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 15:38:08 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/24 10:45:54 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    std::cout << "===========CREATION===========\n";
    DiamondTrap diamondTrap1("Mares");
    DiamondTrap diamondTrap2("Maria");
    std::cout << "\n";
    diamondTrap1.whoAmI();
    diamondTrap2.whoAmI();
    std::cout << "\n";
    std::cout << diamondTrap1 << "\n";
    std::cout << diamondTrap2 << "\n";
    for (int i = 0; i < 4; i++)
    {
        diamondTrap1.attack("Maria");
        diamondTrap2.takeDamage(diamondTrap1.getAttackDamage());
    }
    std::cout << "\n";
    std::cout << diamondTrap1 << "\n";
    std::cout << diamondTrap2 << "\n";
    std::cout << "\n";
    for (int i = 0; i < 50; i++)
        diamondTrap2.beRepaired(1);
    diamondTrap2.attack("Mares");
    std::cout << "\n";
    std::cout << diamondTrap1 << "\n";
    std::cout << diamondTrap2 << "\n";
    std::cout << "\n";
    std::cout << "===========DESTRUCTION===========\n";
    return (0);
}