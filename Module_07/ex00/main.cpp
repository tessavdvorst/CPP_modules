/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 17:32:49 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/04 17:16:00 by Tessa         ########   odam.nl         */
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
    std::string str1 = "hello";
    std::string str2 = "hey";
    
    std::cout << "a = " << a << " and b = " << b << "\n";
    std::cout << "c = " << c << " and d = " << d << "\n";
    std::cout << "e = " << e << " and f = " << f << "\n";
    std::cout << "str1 = " << str1 << " and str2 = " << str2 << "\n";

    swap(a,b);
    swap(c,d);
    swap(e,f);
    swap(str1, str2);
    
    std::cout << "\n ---------------------------------- \n";
    std::cout << "|            AFTER SWAP            |\n";
    std::cout << " ---------------------------------- \n\n";

    std::cout << "a = " << a << " and b = " << b << "\n";
    std::cout << "c = " << c << " and d = " << d << "\n";
    std::cout << "e = " << e << " and f = " << f << "\n";
    std::cout << "str1 = " << str1 << " and str2 = " << str2 << "\n";
    
    std::cout << "\n ---------------------------------- \n";
    std::cout << "|               MAX                |\n";
    std::cout << " ---------------------------------- \n\n";
    
    std::cout << "a = " << a << " and b = " << b;
    std::cout << " ----> largest value = " << max(a, b) << "\n";
    std::cout << "c = " << c << " and d = " << d;
    std::cout << " ----> largest value = " << max(c, d) << "\n";
    std::cout << "e = " << e << " and f = " << f;
    std::cout << " ----> largest value = " << max(e, f) << "\n";

    std::cout << "\n ---------------------------------- \n";
    std::cout << "|               MIN                |\n";
    std::cout << " ---------------------------------- \n\n";
    
    std::cout << "a = " << a << " and b = " << b;
    std::cout << " ----> smallest value = " << min(a, b) << "\n";
    std::cout << "c = " << c << " and d = " << d;
    std::cout << " ----> smallest value = " << min(c, d) << "\n";
    std::cout << "e = " << e << " and f = " << f;
    std::cout << " ----> smallest value = " << min(e, f) << "\n";
    
    return (0);
}

// int main( void )
// {
//     int a = 2;
//     int b = 3;
//     ::swap( a, b );
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
//     std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
//     std::string c = "chaine1";
//     std::string d = "chaine2";
//     ::swap(c, d);
//     std::cout << "c = " << c << ", d = " << d << std::endl;
//     std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
//     std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
//     return (0);
// }
