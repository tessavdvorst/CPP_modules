/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 22:07:39 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/12 15:40:16 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
    setType(weapon);
    return;
}

Weapon::~Weapon(void)
{
    return;
}

const std::string& Weapon::getType(void)
{
    std::string& typeREF = this->_type;
    return (typeREF);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}