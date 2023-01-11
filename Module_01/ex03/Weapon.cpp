/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 22:07:39 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/11 22:12:34 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    return;
}

Weapon::~Weapon(void)
{
    return;
}

std::string& Weapon::getType(void)
{
    std::string& typeREF = this->_type;
    return (typeREF);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}