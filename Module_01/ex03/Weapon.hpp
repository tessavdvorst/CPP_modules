/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 22:03:47 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/13 15:55:49 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream> 

class Weapon {
    private:
        std::string _type;
        
    public:
        Weapon(std::string type);
        ~Weapon(void);
        
        const std::string& getType(void);
        void setType(std::string type);
};

#endif