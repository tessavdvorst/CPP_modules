/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 15:15:12 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/26 15:22:20 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria
{
    protected:
        std::string _type;
        
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria& materia);
        virtual ~AMateria();

        &AMateria operator=(const AMateria& materia);

        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif