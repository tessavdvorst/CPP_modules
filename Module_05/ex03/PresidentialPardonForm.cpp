/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 16:08:32 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/30 16:25:52 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): 
                        AForm(25, 5, "Presidential Pardon Form") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target): 
                        AForm(25, 5, "Presidential Pardon Form"),
                        _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other):
                        AForm(25, 5, "Presidential Pardon Form"),
                        _target(other._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    try {
        this->executeCheck(executor);
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << "\n";
        return (false);
    }
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox\n";
    return (true);
}
