/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 22:07:39 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/13 15:55:48 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
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