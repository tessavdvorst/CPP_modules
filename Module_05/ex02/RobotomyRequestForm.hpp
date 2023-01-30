/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 11:26:22 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/30 16:25:55 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// • RobotomyRequestForm: Required grades: sign 72, exec 45
// Makes some drilling noises. Then, informs that <target> has been robotomized
// successfully 50% of the time. Otherwise, informs that the robotomy failed.

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm: public AForm {
    private:
        const std::string _target;
        RobotomyRequestForm();
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
        
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& other);
        ~RobotomyRequestForm();
        
        bool execute(Bureaucrat const & executor) const;
};

#endif
