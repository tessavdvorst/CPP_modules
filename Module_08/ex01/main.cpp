/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 10:35:45 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/13 11:38:36 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>

int main(void)
{
    std::cout << " ---------------------------------- \n";
    std::cout << "|         BASIC VALID TEST         |\n";
    std::cout << " ---------------------------------- \n\n";
    
    try
    {
        Span span(5);
        span.addNumber(50);
        span.addNumber(2);
        span.addNumber(34);
        span.addNumber(71);
        std::cout << "span contains: ";
        std::cout << span << "\n";
        std::cout << "shortest span: " << span.shortestSpan() << "\n";
        std::cout << "longest span: " << span.longestSpan() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << "\n";
    }
    
    std::cout << " ---------------------------------- \n";
    std::cout << "|          LARGE VALID TEST        |\n";
    std::cout << " ---------------------------------- \n\n";
    
    try
    {
        int N = 10000;
        Span span(N);
        srand(time(NULL));
        for (int i = 0; i < N; i++)
            span.addNumber(rand() % 10000);
        std::cout << "span contains: ";
        std::cout << span << "\n";
        std::cout << "shortest span: " << span.shortestSpan() << "\n";
        std::cout << "longest span: " << span.longestSpan() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << "\n";
    }
    
    std::cout << "\n ---------------------------------- \n";
    std::cout << "|         REACHING MAX SIZE        |\n";
    std::cout << " ---------------------------------- \n\n";
    
    try
    {
        int N = 5;
        Span span(N);
        srand(time(NULL));
        for (int i = 0; i < 10; i++)
            span.addNumber(rand() % 100);
        std::cout << "span contains: ";
        std::cout << span << "\n";
        std::cout << "shortest span: " << span.shortestSpan() << "\n";
        std::cout << "longest span: " << span.longestSpan() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << "\n";
    }
    
    std::cout << "\n ---------------------------------- \n";
    std::cout << "|           NO SPAN FOUND          |\n";
    std::cout << " ---------------------------------- \n\n";
    
    try
    {
        int N = 1;
        Span span(N);
        span.addNumber(1);
        std::cout << "span contains: ";
        std::cout << span << "\n";
        std::cout << "shortest span: " << span.shortestSpan() << "\n";
        std::cout << "longest span: " << span.longestSpan() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << "\n";
    }
    
    std::cout << "\n ---------------------------------- \n";
    std::cout << "|            EMPTY VECTOR          |\n";
    std::cout << " ---------------------------------- \n\n";
    
    try
    {
        Span span;
        std::cout << "span contains: ";
        std::cout << span << "\n";
        std::cout << "shortest span: " << span.shortestSpan() << "\n";
        std::cout << "longest span: " << span.longestSpan() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << "\n";
    }
    
    return (0);
}

