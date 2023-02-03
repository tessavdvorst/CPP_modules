/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   identify.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 15:43:42 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/03 17:27:41 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

int generateRandomInt(void)
{
    unsigned int seed = std::chrono::system_clock::now().time_since_epoch().count();
    srand(seed);
	return (rand() % 3);
}

Base * generate(void)
{
    Base* base = NULL;
    int num = generateRandomInt();
    switch (num)
    {
        case 0:
            base = new A;
            std::cout << "Instanciated A\n";
            break;
        case 1:
            base = new B;
            std::cout << "Instanciated B\n";
            break;
        case 2:
            base = new C;
            std::cout << "Instanciated C\n";
            break;
        default:
            break;
    }
    return (base);
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "*p = A\n";
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "*p = B\n";
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "*p = C\n";
    else 
        std::cout << "Actual type of object pointed to by p can't be identified\n";
}

void identify(Base& p)
{
    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "&p = A\n";
    } catch (std::bad_cast &bc) {} 
    try {
        B& b = dynamic_cast<B&>(p);
        std::cout << "&p = B\n";
    } catch (std::bad_cast &bc) {} 
    try {
        C& c = dynamic_cast<C&>(p);
        std::cout << "&p = C\n";
    } catch (std::bad_cast &bc) {} 
}
