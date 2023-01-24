/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/23 14:15:07 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/24 09:36:22 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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