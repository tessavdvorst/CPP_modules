/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 18:02:32 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/27 19:20:03 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _signGrade(150), _excGrade(150) {}

Form::Form(int signGrade, int excGrade, const std::string& name): 
                                _isSigned(false),
                                _signGrade(signGrade),
                                _excGrade(excGrade),
                                _name(name)
{
    if (this->_signGrade > 150 || this->_excGrade > 150)
        throw GradeTooLowException();
    else if (this->_signGrade < 1 || this->_excGrade < 1)
        throw GradeTooHighException();
}

Form::Form(const Form& form): _signGrade(150), _excGrade(150), _name(form.getName())
{
    *this = form;
}

Form::~Form() {}

Form& Form::operator=(const Form& form)
{
    this->_isSigned = form._isSigned;
    return (*this);
}

bool Form::getIsSigned(void) const
{
    return (this->_isSigned);
}

int Form::getSignGrade(void) const
{
    return (this->_signGrade);
}

int Form::getExcGrade(void) const
{
    return (this->_excGrade);
}

std::string Form::getName(void) const
{
    return (this->_name);
}

std::ostream& operator<<(std::ostream& output, const Form& form)
{
    output << "========Form========\n";
    output << "Name = " << form.getName() << "\n";
    output << "Sign grade = " << form.getSignGrade() << "\n";
    output << "Execute grade = " << form.getExcGrade() << "\n";
    if (form.getExcGrade() == true)
        output << "Signed = yes\n";
    else
        output << "Signed = no\n";
    return (output);
}