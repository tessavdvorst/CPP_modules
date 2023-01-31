/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 18:02:32 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/30 16:45:25 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(): _signGrade(150), _excGrade(150) {}

AForm::AForm(int signGrade, int excGrade, std::string name): _isSigned(false), _signGrade(signGrade), _excGrade(excGrade), _name(name)
{
    if (this->_signGrade > 150 || this->_excGrade > 150)
        throw GradeTooLowException();
    else if (this->_signGrade < 1 || this->_excGrade < 1)
        throw GradeTooHighException();
}

AForm::AForm(const AForm& form): _signGrade(150), _excGrade(150), _name(form.getName())
{
    *this = form;
}

AForm::~AForm() {}

AForm& AForm::operator=(const AForm& form)
{
    this->_isSigned = form._isSigned;
    return (*this);
}

bool AForm::getIsSigned(void) const
{
    return (this->_isSigned);
}

int AForm::getSignGrade(void) const
{
    return (this->_signGrade);
}

int AForm::getExcGrade(void) const
{
    return (this->_excGrade);
}

std::string AForm::getName(void) const
{
    return (this->_name);
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= this->_signGrade)
    {
        this->_isSigned = true;
    }
    else
        throw GradeTooLowException();
}

void AForm::executeCheck(const Bureaucrat& bureaucrat) const
{
    if (bureaucrat.getGrade() > this->_excGrade)
        throw GradeTooLowException();
    if (this->_isSigned != true)
        throw FormNotSignedException();
}

std::ostream& operator<<(std::ostream& output, const AForm& form)
{
    output << "========AForm========\n";
    output << "Name = " << form.getName() << "\n";
    output << "Sign grade = " << form.getSignGrade() << "\n";
    output << "Execute grade = " << form.getExcGrade() << "\n";
    if (form.getIsSigned() == true)
        output << "Signed = yes\n";
    else
        output << "Signed = no\n";
    return (output);
}
