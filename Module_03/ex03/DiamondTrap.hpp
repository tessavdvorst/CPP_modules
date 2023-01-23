/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/23 14:15:07 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/23 16:27:02 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// In this exercise, you will create a monster: a ClapTrap that’s half FragTrap, half
// ScavTrap. It will be named DiamondTrap, and it will inherit from both the FragTrap
// AND the ScavTrap. This is so risky!

// The DiamondTrap class will have a name private attribute. Give to this attribute
// exactly the same variable’s name (not talking about the robot’s name here) than the one
// in the ClapTrap base class.

// To be more clear, here are two examples.
// If ClapTrap’s variable is name, give the name name to the one of the DiamondTrap.
// If ClapTrap’s variable is _name, give the name _name to the one of the DiamondTrap.

// Its attributes and member functions will be picked from either one of its parent classes:
// • Name, which is passed as parameter to a constructor
// • ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
// • Hit points (FragTrap) -> 100
// • Energy points (ScavTrap) -> 50
// • Attack damage (FragTrap) -> 30
// • attack() (Scavtrap)

// In addition to the special functions of both its parent classes, DiamondTrap will have
// its own special capacity:
// void whoAmI();

// This member function will display both its name and its ClapTrap name.
// Of course, the ClapTrap subobject of the DiamondTrap will be created once, and only
// once. Yes, there’s a trick.

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string _name;
       
    public:
        DiamondTrap();
        DiamondTrap(const std::string& name);
        DiamondTrap(const DiamondTrap& diamondTrap);
        ~DiamondTrap();

        DiamondTrap& operator=(const DiamondTrap& diamondTrap);
        
        std::string getDiamondName(void) const;

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void whoAmI();
};

std::ostream& operator<<(std::ostream& output, const DiamondTrap &diamondTrap);
#endif