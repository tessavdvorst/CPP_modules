/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 16:28:36 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/30 15:34:59 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "iostream"
#include "string"

class Bureaucrat;

class AForm {
    private:
        bool _isSigned;
        const int _signGrade;
        const int _excGrade;
        const std::string _name;
        AForm();

    public:
        AForm(int signGrade, int excGrade, std::string name);
        AForm(const AForm& form);
        virtual ~AForm();

        AForm& operator=(const AForm& form);

        class GradeTooHighException: public std::exception {
            public:
                const char* what() const throw() {return "grade too high";};
        };
        
        class GradeTooLowException: public std::exception {
            public:
                const char* what() const throw() {return "grade too low";};
        };
        
        class FormNotSignedException: public std::exception {
            public:
                const char* what() const throw() {return "form not signed";};
        };

        bool getIsSigned(void) const;
        int getSignGrade(void) const;
        int getExcGrade(void) const;
        std::string getName(void) const;

        void beSigned(const Bureaucrat& bureaucrat);
        void executeCheck(const Bureaucrat& bureaucrat) const;
        virtual bool execute(Bureaucrat const & executor) const = 0; //pure virtual
};

std::ostream& operator<<(std::ostream& output, const AForm& form);

#endif
