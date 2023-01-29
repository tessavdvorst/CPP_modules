/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 11:27:18 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/29 17:21:41 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string& name, int grade): _name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat): _name(bureaucrat.getName())
{
    *this = bureaucrat;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
    this->_grade = bureaucrat._grade;
    return (*this);    
}

std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void Bureaucrat::increaseGrade(void)
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	else
		this->_grade--; 
}

void Bureaucrat::decreaseGrade(void)
{
   	if (this->_grade == 150)
		throw GradeTooLowException();
	else
		this->_grade++; 
}

void Bureaucrat::signForm(Form& form) const
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << '\n';
    }
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat& bureaucrat)
{
    output << bureaucrat.getName();
    output << ", bureaucrat grade ";
    output << bureaucrat.getGrade() << ".\n";
	return (output);
}