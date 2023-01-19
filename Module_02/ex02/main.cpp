/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 21:45:34 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/19 15:18:18 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iomanip>

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl << std::endl;

    //extra tests
    Fixed c(3);
    Fixed d(2);
    Fixed e(c / d);
    
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "e + a = " << e + a << std::endl;
    std::cout << "c * d = " << c * d << std::endl;
    std::cout << "c - d = " << c - d << std::endl;
    
    std::cout << "c < d = " << (c < d) << std::endl;
    std::cout << "c > d = " << (c > d) << std::endl;
    std::cout << "c >= d = " << (c >= d) << std::endl;
    std::cout << "c <= d = " << (c <= d) << std::endl;
    std::cout << "c == d = " << (c == d) << std::endl;
    std::cout << "c == c = " << (c == c) << std::endl;
    std::cout << "c != d = " << (c != d) << std::endl;

    std::cout << "e++ = " << e++ << std::endl;
    std::cout << "e-- = " << e-- << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "++e = " << ++e << std::endl;
    std::cout << "--e = " << --e << std::endl;
    
    std::cout << "min = " << Fixed::min( c, d ) << std::endl;
    std::cout << "max = " << Fixed::max( c, d ) << std::endl;
    std::cout << "min = " << Fixed::min( e, d ) << std::endl;
    std::cout << "max = " << Fixed::max( e, d ) << std::endl;
    
    
    return 0;
}