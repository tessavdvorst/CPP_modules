/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/12 10:51:50 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/13 14:36:04 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club"); // weapon object is created & initialized with type
        HumanA bob("Bob", club); // humanA object is created & initialized with name and weapon
        bob.attack(); // bob attacks
        club.setType("some other type of club"); // weapon is set to another type
        bob.attack(); // bob attacks -> type is changed
    }
    {
        Weapon club = Weapon("crude spiked club"); // weapon object is created & initialized with type
        HumanB jim("Jim"); // humanB object is created & initialized with name
        jim.setWeapon(club); // humanB's weapon is set with weapon object
        jim.attack(); // jim attacks
        club.setType("some other type of club"); // weapon is set to another type
        jim.attack(); // jim attacks -> type is changed
    }
}