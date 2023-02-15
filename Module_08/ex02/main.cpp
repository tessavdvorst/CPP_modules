/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 15:43:48 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/13 11:31:50 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>
#include <list>

int main()
{
    MutantStack<int> mstack;
    std::vector<int> mvector;
    std::list<int> mlist;
    
    mstack.push(5);
    mstack.push(17);
    mstack.push(4);
    
    mlist.push_back(5);
    mlist.push_back(17);
    mlist.push_back(4);
    
    mvector.push_back(5);
    mvector.push_back(17);
    mvector.push_back(4);
    
    
    std::cout << "\n ---------------------------------- \n";
    std::cout << "|          DISPLAY CONTENTS         |\n";
    std::cout << " ---------------------------------- \n\n";
    
    std::cout << "MUTANT STACK: ";
    for(MutantStack<int>::iterator stack_it = mstack.begin(); stack_it != mstack.end(); stack_it++)
        std::cout << *stack_it << " ";
    std::cout << "\n";

    std::cout << "LIST: ";
    for(std::list<int>::iterator list_it = mlist.begin(); list_it != mlist.end(); list_it++)
        std::cout << *list_it << " ";
    std::cout << "\n";
    
    std::cout << "VECTOR: ";
    for(std::vector<int>::iterator vector_it = mvector.begin(); vector_it != mvector.end(); vector_it++)
        std::cout << *vector_it << " ";
    std::cout << "\n";

    
    std::cout << "\n ---------------------------------- \n";
    std::cout << "|        TOP (LAST) ELEMENT        |\n";
    std::cout << " ---------------------------------- \n\n";
    std::cout << "MUTANT STACK: " << mstack.top() << "\n";
    std::cout << "LIST: " << mvector.back() << "\n";
    std::cout << "VECTOR: " << mlist.back() << "\n";
    
    std::cout << "\n ---------------------------------- \n";
    std::cout << "| SIZE BEFORE REMOVING LAST ELEMENT |\n";
    std::cout << " ---------------------------------- \n\n";
    
    std::cout << "MUTANT STACK SIZE: " << mstack.size() << "\n";
    std::cout << "LIST SIZE: " << mlist.size() << "\n";
    std::cout << "VECTOR SIZE: " << mvector.size() << "\n";
    
    mstack.pop();
    mlist.pop_back();
    mvector.pop_back();
    
    std::cout << "\n ---------------------------------- \n";
    std::cout << "| SIZE AFTER REMOVING LAST ELEMENT |\n";
    std::cout << " ---------------------------------- \n\n";
    
    std::cout << "MUTANT STACK SIZE: " << mstack.size() << "\n";
    std::cout << "LIST SIZE: " << mlist.size() << "\n";
    std::cout << "VECTOR SIZE: " << mvector.size() << "\n";
    
    std::cout << "\n ---------------------------------- \n";
    std::cout << "|          DISPLAY CONTENTS         |\n";
    std::cout << " ---------------------------------- \n\n";
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    mlist.push_back(0);
    
    mvector.push_back(3);
    mvector.push_back(5);
    mvector.push_back(737);
    mvector.push_back(0);
    
    std::cout << "MUTANT STACK: ";
    for(MutantStack<int>::iterator stack_it = mstack.begin(); stack_it != mstack.end(); stack_it++)
        std::cout << *stack_it << " ";
    std::cout << "\n";

    std::cout << "LIST: ";
    for(std::list<int>::iterator list_it = mlist.begin(); list_it != mlist.end(); list_it++)
        std::cout << *list_it << " ";
    std::cout << "\n";
    
    std::cout << "VECTOR: ";
    for(std::vector<int>::iterator vector_it = mvector.begin(); vector_it != mvector.end(); vector_it++)
        std::cout << *vector_it << " ";
    std::cout << "\n";
    
    return (0);
}
