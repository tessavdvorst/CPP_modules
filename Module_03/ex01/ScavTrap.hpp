/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/21 13:44:37 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/24 10:42:19 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    private:
        bool _gateKeeperMode;
        
    public:
        ScavTrap();
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& scavTrap);
        ~ScavTrap();

        ScavTrap& operator=(const ScavTrap& scavTrap);

        bool getGateKeeperMode(void) const;
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void guardGate();
};

std::ostream& operator<<(std::ostream& output, const ScavTrap &scavTrap);

#endif