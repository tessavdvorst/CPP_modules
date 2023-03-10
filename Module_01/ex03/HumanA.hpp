/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/12 10:50:17 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/13 15:59:35 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CPP
# define HUMAN_A_CPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
        Weapon& _weapon;
        
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(void);
        
        std::string getName(void);
        Weapon getWeapon(void);
        void attack();
};

#endif