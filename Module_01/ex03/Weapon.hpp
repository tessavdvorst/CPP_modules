/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 22:03:47 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/12 15:40:25 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream> 

class Weapon {
    private:
        std::string _type;
        
    public:
        Weapon(std::string weapon);
        ~Weapon(void);
        
        const std::string& getType(void);
        void setType(std::string type);
};

#endif