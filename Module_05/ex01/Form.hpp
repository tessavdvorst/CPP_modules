/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 16:28:36 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/10 11:13:41 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form {
    private:
        bool _isSigned;
        const int _signGrade;
        const int _excGrade;
        const std::string _name;
        Form();

    public:
        Form(int signGrade, int excGrade, std::string name);
        Form(const Form& form);
        ~Form();

        Form& operator=(const Form& form);

        class GradeTooHighException: public std::exception {
            public:
                const char* what() const throw() {return "grade too high";};
        };
        
        class GradeTooLowException: public std::exception {
            public:
                const char* what() const throw() {return "grade too low";};
        };

        bool getIsSigned(void) const;
        int getSignGrade(void) const;
        int getExcGrade(void) const;
        std::string getName(void) const;

        void beSigned(const Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& output, const Form& form);

#endif