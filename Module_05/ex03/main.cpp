/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 11:27:17 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/31 11:38:01 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
    Bureaucrat Maria("Maria", 20);
    
    std::cout << " ---------------------------------- \n";
    std::cout << "|      SHRUBBERY CREATION FORM     |\n";
    std::cout << " ---------------------------------- \n\n";
    
    Intern someRandomIntern;
    AForm* rrf;
    
    rrf = someRandomIntern.makeForm("shrubbery creation", "Garden");
    if (rrf)
    {        
        std::cout << "\n";
        std::cout << *rrf << "\n";
        Maria.signForm(*rrf);
        Maria.executeForm(*rrf);
        delete rrf;
    }
    std::cout << "\n";
    
    std::cout << " ---------------------------------- \n";
    std::cout << "|     PRESIDENTIAL PARDON FORM     |\n";
    std::cout << " ---------------------------------- \n\n";
    
    Intern someRandomIntern1;
    AForm* rrf1;
    
    rrf1 = someRandomIntern1.makeForm("presidential pardon", "Tessa");
    if (rrf1)
    {        
        std::cout << "\n";
        std::cout << *rrf1 << "\n";
        Maria.signForm(*rrf1);
        Maria.executeForm(*rrf1);
        delete rrf1;
    }
    std::cout << "\n";
    
    std::cout << " --------------------------------- \n";
    std::cout << "|      ROBOTOMY REQUEST FORM      |\n";
    std::cout << " --------------------------------- \n\n";
    
    Intern someRandomIntern2;
    AForm* rrf2;
    
    rrf2 = someRandomIntern2.makeForm("robotomy request", "Animal");
    if (rrf2)
    {        
        std::cout << "\n";
        std::cout << *rrf2 << "\n";
        Maria.signForm(*rrf2);
        Maria.executeForm(*rrf2);
        delete rrf2;
    }
    std::cout << "\n";
    
    std::cout << " --------------------------------- \n";
    std::cout << "|          INVALID FORM           |\n";
    std::cout << " --------------------------------- \n\n";
    
    Intern someRandomIntern3;
    AForm* rrf3;
    
    rrf3 = someRandomIntern3.makeForm("random form", "random target");
    if (rrf3)
    {        
        std::cout << "\n";
        std::cout << *rrf3 << "\n";
        Maria.signForm(*rrf3);
        Maria.executeForm(*rrf3);
        delete rrf3;
    }

    return (0);
}
