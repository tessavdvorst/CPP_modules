/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 11:17:06 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/25 15:40:09 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat: public WrongAnimal
{
    private:
        Brain* _attribute;
        
    public:
        WrongCat();
        WrongCat(const WrongCat& wrongCat);
        ~WrongCat();
        
        WrongCat& operator=(const WrongCat& wrongCat);

        Brain* getBrain(void) const
        void makeSound(void) const;
};

#endif