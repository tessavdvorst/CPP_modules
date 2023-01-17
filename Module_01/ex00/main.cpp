/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 13:13:56 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/17 11:36:48 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* z1;
    
    z1 = newZombie("boo");
    z1->announce();
    delete z1;
    
    randomChump("foo");
    return (0);
}