/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 11:27:17 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/30 16:43:45 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    std::cout << " ---------------------------------- \n";
    std::cout << "|      SHRUBBERY CREATION FORM     |\n";
    std::cout << " ---------------------------------- \n\n";
    
    ShrubberyCreationForm sForm("House");
    Bureaucrat maria("Maria", 2);
    std::cout << maria << "\n";
    std::cout << sForm << "\n";
    maria.signForm(sForm);
    std::cout << "\n";
    std::cout << sForm << "\n";
    maria.executeForm(sForm);
    std::cout << "\n";
    
    std::cout << " ---------------------------------- \n";
    std::cout << "|  INVALID SHRUBBERY CREATION FORM |\n";
    std::cout << " ---------------------------------- \n\n";
    
    ShrubberyCreationForm sFormInvalid("House");
    Bureaucrat mares("Mares", 140);
    std::cout << mares << "\n";
    std::cout << sFormInvalid << "\n";
    mares.signForm(sFormInvalid);
    std::cout << "\n";
    std::cout << sFormInvalid << "\n";
    mares.executeForm(sFormInvalid);
    std::cout << "\n";
    
    std::cout << " ---------------------------------- \n";
    std::cout << "|     PRESIDENTIAL PARDON FORM     |\n";
    std::cout << " ---------------------------------- \n\n";
    
    PresidentialPardonForm pForm("Nicky");
    Bureaucrat justin("Justin", 2);
    std::cout << justin << "\n";
    std::cout << pForm << "\n";
    justin.signForm(pForm);
    std::cout << "\n";
    std::cout << pForm << "\n";
    justin.executeForm(pForm);
    std::cout << "\n";
    
    std::cout << " ---------------------------------- \n";
    std::cout << "| INVALID PRESIDENTIAL PARDON FORM |\n";
    std::cout << " ---------------------------------- \n\n";
    
    PresidentialPardonForm pFormInvalid("Nicky");
    Bureaucrat tessa("Tessa", 140);
    std::cout << tessa << "\n";
    std::cout << pFormInvalid << "\n";
    tessa.signForm(pFormInvalid);
    std::cout << "\n";
    std::cout << pFormInvalid << "\n";
    tessa.executeForm(pFormInvalid);
    std::cout << "\n";
    
    std::cout << " --------------------------------- \n";
    std::cout << "|      ROBOTOMY REQUEST FORM      |\n";
    std::cout << " --------------------------------- \n\n";
    
    RobotomyRequestForm rForm("Cat");
    Bureaucrat idan("Idan", 2);
    std::cout << idan << "\n";
    std::cout << rForm << "\n";
    idan.signForm(rForm);
    std::cout << "\n";
    std::cout << rForm << "\n";
    idan.executeForm(rForm);
    std::cout << "\n";
    
    std::cout << " --------------------------------- \n";
    std::cout << "|      ROBOTOMY REQUEST FORM 2    |\n";
    std::cout << " --------------------------------- \n\n";
    
    RobotomyRequestForm rForm2("Cat");
    Bureaucrat gian("Gian", 2);
    std::cout << gian << "\n";
    std::cout << rForm2 << "\n";
    gian.signForm(rForm2);
    std::cout << "\n";
    std::cout << rForm2 << "\n";
    gian.executeForm(rForm2);
    std::cout << "\n";
    
    std::cout << " --------------------------------- \n";
    std::cout << "|  INVALID ROBOTOMY REQUEST FORM  |\n";
    std::cout << " --------------------------------- \n\n";
    
    RobotomyRequestForm rFormInvalid("Cat");
    Bureaucrat kawish("Kawish", 0);
    std::cout << kawish << "\n";
    std::cout << rFormInvalid << "\n";
    kawish.signForm(rFormInvalid);
    std::cout << "\n";
    std::cout << rFormInvalid << "\n";
    kawish.executeForm(rFormInvalid);
    std::cout << "\n";

    return (0);
}
