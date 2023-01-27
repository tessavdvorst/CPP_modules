/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 11:27:17 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/27 19:31:08 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
    try {
        Form form(3, 90, "Idan");
        std::cout << form << "\n";
        Bureaucrat b("Tessa", 50);
        // Form form1(0, 90, "Tessa");
        // std::cout << form1 << "\n";
        Form form2(3, 901, "Idan");
        std::cout << form2 << "\n";
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << "\n";
    }
    return (0);
}