/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 11:27:20 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/29 17:24:37 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
class Bureaucrat;
#include "Form.hpp"
class Bureaucrat {
    private:
        const std::string _name;
        int _grade;
        
    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat& bureaucrat);
        ~Bureaucrat();

        Bureaucrat& operator=(const Bureaucrat& bureaucrat);

        class GradeTooHighException: public std::exception {
            public:
                const char* what() const throw() {return "grade too high";};
        };
        
        class GradeTooLowException: public std::exception {
            public:
                const char* what() const throw() {return "grade too low";};
        };
        
        std::string getName(void) const;
        int getGrade(void) const;
        void increaseGrade(void);
        void decreaseGrade(void);
        void signForm(Form& form) const;
};

std::ostream& operator<<(std::ostream& output, const Bureaucrat& bureaucrat);
#endif