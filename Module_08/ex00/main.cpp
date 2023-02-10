/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 11:02:50 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/10 11:39:21 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <string>

int main(void)
{
    const int num = 10;
    
    std::cout << " ---------------------------------- \n";
    std::cout << "|              VECTOR              |\n";
    std::cout << " ---------------------------------- \n\n";
    
    std::vector<int> intVec;
    intVec.push_back(4);
    intVec.push_back(10);
    intVec.push_back(2);
    
    std::cout << "Vector container: "; 
    for (int i = 0; i < static_cast<int>(intVec.size()); i++)
        std::cout << intVec[i] << " ";
    std::cout << "\n\n";
    
    try 
    {
        std::cout << "Found " << *easyfind(intVec, num) << "!\n";
    } catch (const std::exception& e) {
        std::cout << num << " not found in container" << "\n";
    }
    
    std::cout << " ---------------------------------- \n";
    std::cout << "|           EMPTY VECTOR           |\n";
    std::cout << " ---------------------------------- \n\n";
    
    std::vector<int> intVecEmpty;
    
    std::cout << "Vector container: "; 
    for (int i = 0; i < static_cast<int>(intVecEmpty.size()); i++)
        std::cout << intVecEmpty[i] << " ";
    std::cout << "\n\n";
    
    try 
    {
        std::cout << "Found " << *easyfind(intVecEmpty, num) << "!\n";
    } catch (const std::exception& e) {
        std::cout << num << " not found in container" << "\n";
    }
    
    std::cout << "\n ---------------------------------- \n";
    std::cout << "|              ARRAY               |\n";
    std::cout << " ---------------------------------- \n\n";

    std::array<int,7> intArr = { 0, 1, 1, 2, 3, 5, 8 };

    std::cout << "Array container: "; 
    for (int i = 0; i < static_cast<int>(intArr.size()); i++)
        std::cout << intArr[i] << " ";
    std::cout << "\n\n";
    
    try 
    {
        std::cout << "Found " << *easyfind(intArr, num) << "!\n";
    } catch (const std::exception& e) {
        std::cout << num << " not found in container" << "\n";
    }
    std::cout << "\n ---------------------------------- \n";
    std::cout << "|              DEQUE               |\n";
    std::cout << " ---------------------------------- \n\n";

    std::deque<int> intDeque;
    intDeque.push_back(10);
    intDeque.push_front(1);
    intDeque.push_back(9);
    intDeque.push_front(2);
    intDeque.push_back(8);
    
    std::cout << "Deque container: "; 
    for (int i = 0; i < static_cast<int>(intDeque.size()); i++)
        std::cout << intDeque[i] << " ";
    std::cout << "\n\n";
    
    try 
    {
        std::cout << "Found " << *easyfind(intDeque, num) << "!\n";
    } catch (const std::exception& e) {
        std::cout << num << " not found in container" << "\n";
    }

    std::cout << "\n ---------------------------------- \n";
    std::cout << "|               LIST               |\n";
    std::cout << " ---------------------------------- \n\n";

    std::list<int> intList;
    
    intList.push_back(10);
    intList.push_back(20);
    intList.push_back(30);

    std::cout << "List container: ";
    for (std::list<int>::iterator it = intList.begin(); it != intList.end(); it++)
        std::cout << *it << " ";
    std::cout << "\n\n";
    
    try 
    {
        std::cout << "Found " << *easyfind(intList, num) << "!\n";
    } catch (const std::exception& e) {
        std::cout << num << " not found in container" << "\n";
    }
    return (0);
}
