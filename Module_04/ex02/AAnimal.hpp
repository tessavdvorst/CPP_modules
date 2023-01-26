/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 15:29:38 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/26 14:58:25 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
    protected:
        std::string _type;

    public:
        AAnimal();
        AAnimal(const std::string& type);
        AAnimal(const AAnimal& animal);
        virtual ~AAnimal();
        
        AAnimal& operator=(const AAnimal& animal);

        std::string getType(void) const;
        virtual void makeSound(void) const = 0;
};

#endif