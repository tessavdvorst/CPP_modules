/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 17:32:49 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/03 17:54:42 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main(void)
{
    std::cout << " ---------------------------------- \n";
    std::cout << "|            BEFORE SWAP           |\n";
    std::cout << " ---------------------------------- \n\n";
    int a = 1;
    int b = 10;
    char c = 'c';
    char d = 'd';
    double e = 2.5;
    double f = 5.2;
    
    std::cout << "a = " << a << " and b = " << b << "\n";
    std::cout << "c = " << c << " and d = " << d << "\n";
    std::cout << "e = " << e << " and f = " << f << "\n";

    swap(a,b);
    swap(c,d);
    swap(e,f);
    
    std::cout << "\n ---------------------------------- \n";
    std::cout << "|            AFTER SWAP            |\n";
    std::cout << " ---------------------------------- \n\n";

    std::cout << "a = " << a << " and b = " << b << "\n";
    std::cout << "c = " << c << " and d = " << d << "\n";
    std::cout << "e = " << e << " and f = " << f << "\n";
    
    std::cout << "\n ---------------------------------- \n";
    std::cout << "|               MAX                 |\n";
    std::cout << " ---------------------------------- \n\n";
    
    std::cout << "a = " << a << " and b = " << b;
    std::cout << " ----> largest value = " << max(a, b) << "\n";
    std::cout << "c = " << c << " and d = " << d;
    std::cout << " ----> largest value = " << max(c, d) << "\n";
    std::cout << "e = " << e << " and f = " << f;
    std::cout << " ----> largest value = " << max(e, f) << "\n";

    std::cout << "\n ---------------------------------- \n";
    std::cout << "|               MIN                 |\n";
    std::cout << " ---------------------------------- \n\n";
    
    std::cout << "a = " << a << " and b = " << b;
    std::cout << " ----> smallest value = " << min(a, b) << "\n";
    std::cout << "c = " << c << " and d = " << d;
    std::cout << " ----> smallest value = " << min(c, d) << "\n";
    std::cout << "e = " << e << " and f = " << f;
    std::cout << " ----> smallest value = " << min(e, f) << "\n";
    
    
    return (0);
}
