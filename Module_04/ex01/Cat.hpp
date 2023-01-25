/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 15:38:06 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/25 15:44:46 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain* _attribute;
        
    public:
        Cat();
        Cat(const Cat& cat);
        ~Cat();
        
        Cat& operator=(const Cat& cat);

        Brain* getBrain(void) const;
        void makeSound(void) const;
};

#endif