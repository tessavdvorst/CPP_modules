/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 18:16:47 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/11 21:20:14 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zHorde;
    
    zHorde = new Zombie[N];
    for (int i = 0; i < N; i++)
        zHorde[i].setName(name);
    return (zHorde);
}