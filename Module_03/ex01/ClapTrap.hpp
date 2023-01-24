/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 13:54:39 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/24 10:38:15 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;

        ClapTrap(std::string name, int hitpoints, int energypoints, int attackdamage);
        
    public:
        ClapTrap();
        ClapTrap(const std::string& name);
        ClapTrap(const ClapTrap& clapTrap);
        ~ClapTrap();

        ClapTrap& operator=(const ClapTrap& clapTrap);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        std::string getName(void) const;
        int getHitPoints(void) const;
        int getEnergyPoints(void) const;
        int getAttackDamage(void) const;
};

std::ostream& operator<<(std::ostream& output, const ClapTrap& clapTrap);


#endif