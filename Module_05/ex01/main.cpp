/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 11:27:17 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/30 11:11:18 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{

    std::cout << " -------------------------------- \n";
    std::cout << "|           VALID TEST           |\n";
    std::cout << " -------------------------------- \n\n";
    
    try {
        Form form(3, 90, "Housing registration");
        std::cout << form << "\n";
        Bureaucrat b("Tessa", 2);
        b.signForm(form);
        std::cout << "\n";
        std::cout << form << "\n";  
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << "\n";
    }
    
    std::cout << " -------------------------------- \n";
    std::cout << "|          INVALID FORM          |\n";
    std::cout << " -------------------------------- \n\n";
    
    try {
        Form form(0, 90, "Job registration");
        std::cout << form << "\n";
        Bureaucrat b("Haseeb", 2);
        b.signForm(form);
        std::cout << "\n";
        std::cout << form << "\n";  
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << "\n";
        std::cout << "\n";
    }
    
    std::cout << " -------------------------------- \n";
    std::cout << "|        INVALID SIGN GRADE      |\n";
    std::cout << " -------------------------------- \n\n";
    
    try {
        Form form(1, 150, "Lottery registration");
        std::cout << form << "\n";
        Bureaucrat b("Mares", 2);
        b.signForm(form);
        std::cout << "\n";
        std::cout << form << "\n";  
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << "\n";
    }
    return (0);
}