/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 19:41:05 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/16 16:11:42 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
   int N = 5;
   Zombie* zHorde;

    zHorde = zombieHorde(N, "foo");

    for (int i = 0; i < N; i++)
        zHorde[i].announce();
        
    delete[] zHorde;
    return (0);
}