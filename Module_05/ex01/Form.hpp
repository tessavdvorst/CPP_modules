/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 16:28:36 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/27 18:52:13 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
    private:
        bool _isSigned;
        const int _signGrade;
        const int _excGrade;
        const std::string _name;

    public:
        Form();
        Form(int signGrade, int excGrade, const std::string& name);
        Form(const Form& form);
        ~Form();

        Form& operator=(const Form& form);

        class GradeTooHighException: public std::exception {
            public:
                const char* what() const throw() {return "Grade too high\n";};
        };
        
        class GradeTooLowException: public std::exception {
            public:
                const char* what() const throw() {return "Grade too low\n";};
        };

        bool getIsSigned(void) const;
        int getSignGrade(void) const;
        int getExcGrade(void) const;
        std::string getName(void) const;

        void beSigned(Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& output, const Form& form);

#endif