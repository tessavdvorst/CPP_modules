/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 15:38:36 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/24 17:05:53 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(const std::string& type);
        Dog(const Dog& dog);
        ~Dog();
        
        Dog& operator=(const Dog& dog);

        virtual void makeSound();   
};

#endif