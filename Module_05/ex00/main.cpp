/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 11:27:17 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/27 16:25:46 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    std::cout << "==========VALID INSTANTIATION===========\n";
    try {
        Bureaucrat b("Bram", 149);
        std::cout << b;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }
    
    std::cout << "=========INVALID INSTANTIATION==========\n";
    try {
        Bureaucrat b("Tessa", 0);
        std::cout << b;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }

    std::cout << "============GRADE DECREMENT=============\n";
    try {
        Bureaucrat b1("Maria", 5);
        std::cout << b1;
        for (int i = 0; i < 150; i++)
            b1.decreaseGrade(); 
        std::cout << b1;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }

    std::cout << "============GRADE INCREMENT=============\n";
    try {
        Bureaucrat b3("Mares", 100);
        std::cout << b3;
        for (int i = 0; i < 150; i++)
            b3.increaseGrade();
        std::cout << b3;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }    
    
    return (0);
}