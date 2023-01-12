/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 13:13:56 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/12 10:44:05 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* z1;
    
    z1 = newZombie("boo");
    z1->announce();
    randomChump("foo");
    delete z1;
    return (0);
}