/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/12 10:50:16 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/13 14:35:59 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_CPP
# define HUMAN_B_CPP

#include "Weapon.hpp"

class HumanB {
    private:
        std::string _name;
        Weapon* _weapon;
        
    public:
        HumanB(std::string name);
        ~HumanB(void);
        
        std::string getName(void);
        Weapon* getWeapon(void);
        void setWeapon(Weapon& weapon);
        void attack();
};

#endif