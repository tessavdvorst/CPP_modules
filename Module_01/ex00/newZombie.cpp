/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 13:21:14 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/11 18:12:59 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie* zombie;
    
    zombie = new Zombie(name);
    return (zombie);
}