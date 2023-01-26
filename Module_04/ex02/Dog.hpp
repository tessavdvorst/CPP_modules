/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 15:38:36 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/26 14:59:56 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
    private:
        Brain* _attribute;
    
    public:
        Dog();
        Dog(const Dog& dog);
        ~Dog();
        
        Dog& operator=(const Dog& dog);

        Brain* getBrain(void) const;
        void makeSound(void) const;
};

#endif