/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   OutputGenerator.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 16:27:15 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/02 18:22:45 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "OutputGenerator.hpp"

OutputGenerator::OutputGenerator(std::string input, LitType type)
{
}

void OutputGenerator::displayOutput()
{
    try
    {
        std::cout << "char: ";
        std::cout << static_cast<char>(conversion_.toInt(input_)) << "\n";
    } catch (const std::exception& e) {
        std::cout << e.what() << "\n";
    }
    try 
    {
        std::cout << "int: ";
        std::cout << static_cast<char>(conversion_.toInt(input_)) << "\n";
    } catch (const std::exception& e) {
        std::cout << e.what() << "\n";
    }
    try
    {
        std::cout << "float: ";
        std::cout << static_cast<char>(conversion_.toInt(input_)) << "\n";
    } catch (const std::exception& e) {
        std::cout << e.what() << "\n";
    }
    try
    {
        std::cout << "double: ";
        std::cout << static_cast<char>(conversion_.toInt(input_)) << "\n";
    } catch (const std::exception& e) {
        std::cout << e.what() << "\n";
    }
}