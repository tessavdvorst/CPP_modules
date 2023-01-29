/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 11:27:17 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/29 17:26:19 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
    try {
        // Form form(3, 90, "Housing registration");
        Form form;
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
    return (0);
}