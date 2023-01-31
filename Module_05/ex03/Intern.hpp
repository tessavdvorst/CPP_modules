/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 10:38:56 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/31 11:32:08 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
    private:
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);
    
    public:
        Intern();   
        ~Intern();

        AForm* makeForm(std::string formName, std::string target);
};

#endif
