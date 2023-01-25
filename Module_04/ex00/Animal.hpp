/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 15:29:38 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/25 13:36:49 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(const std::string& type);
        Animal(const Animal& animal);
        virtual ~Animal();
        
        Animal& operator=(const Animal& animal);

        std::string getType(void) const;
        virtual void makeSound(void) const;
};

#endif