/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 10:39:40 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/31 11:32:17 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

int getFormType(std::string formName)
{
    std::string formTypes[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++)
    {
        if (formTypes[i] == formName)
            return (i);        
    }
    return (-1);
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
    int index = getFormType(formName);
    AForm* form = NULL;
    switch (index)
    {
        case 0:
            form = new ShrubberyCreationForm(target);
            break;
        case 1:
            form = new RobotomyRequestForm(target);
            break;
        case 2:
            form = new PresidentialPardonForm(target);
            break;
        default:
            std::cerr << "Form does not exist\n";
            break;
    }
    if (form)
        std::cout << "Intern creates " << formName << " form\n";
    return (form);
}
