/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/23 12:36:38 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/23 13:48:31 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{      
    public:
        FragTrap();
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& fragTrap);
        ~FragTrap();

        FragTrap& operator=(const FragTrap& fragTrap);

        void attack(const std::string& target);
        void highFivesGuys(void);
};

std::ostream& operator<<(std::ostream& output, const FragTrap &fragTrap);

#endif