/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/05 16:53:21 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/07 15:42:04 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 10

int main()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    std::cout << "\n ---------------------------------- \n";
    std::cout << "|       TEMPLATE CLASS ARRAY       |\n";
    std::cout << " ---------------------------------- \n\n";
    std::cout << numbers;
    
    std::cout << "\n ---------------------------------- \n";
    std::cout << "|        ASSIGNMENT OPERATOR        |\n";
    std::cout << " ---------------------------------- \n\n";
    
    Array<int> tmp = numbers;
    std::cout << tmp;

    std::cout << "\n ---------------------------------- \n";
    std::cout << "|          COPY CONSTRUCTOR        |\n";
    std::cout << " ---------------------------------- \n\n";
    Array<int> test(tmp);
    std::cout << test;

    std::cout << "\n ---------------------------------- \n";
    std::cout << "|           AFTER CHANGE            |\n"; 
    std::cout << " ---------------------------------- \n\n";
    std::cout << "tmp[3] before change = " << tmp[3] << "\n";
    std::cout << "numbers[3] before change = " << numbers[3] << "\n";
    tmp[3] = 0;
    std::cout << "\n";
    std::cout << "tmp[3] after change = " << tmp[3] << "\n";
    std::cout << "numbers[3] after change = " << numbers[3] << "\n";
    
    std::cout << "\n ---------------------------------- \n";
    std::cout << "|           REGULAR ARRAY          |\n";
    std::cout << " ---------------------------------- \n\n";
    for (int i = 0; i < MAX_VAL; i++)
        std::cout << mirror[i] << "\n";
    std::cout << "\n";
        
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    
    std::cout << "\n ---------------------------------- \n";
    std::cout << "|          INVALID INDEX           |\n";
    std::cout << " ---------------------------------- \n\n";
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    
    delete [] mirror;
    return 0;
}
