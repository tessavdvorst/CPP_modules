/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 12:05:56 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/03 16:39:38 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

int main(void)
{
    Base* basePtr1 = generate();
    identify(basePtr1);
    identify(*basePtr1);
    std::cout << "\n";
    Base* basePtr2 = generate();
    identify(basePtr2);
    identify(*basePtr2);
    std::cout << "\n";
    Base* basePtr3 = generate();
    identify(basePtr3);
    identify(*basePtr3);
    
    delete basePtr1;
    delete basePtr2;
    delete basePtr3;
}
