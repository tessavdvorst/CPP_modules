/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 15:38:06 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/24 17:05:16 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(const std::string& type);
        Cat(const Cat& cat);
        ~Cat();
        
        Cat& operator=(const Cat& cat);

        virtual void makeSound();
};

#endif