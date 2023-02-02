/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 20:20:13 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/02 21:34:54 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Error: invalid amount of arguments\n";
        return (1);
    }
    try {
        convertFromType(argv[1]);
    } catch (const std::exception& e)
    {
        std::cout << "Error: " << e.what() << "\n";
    }
    return (0);
}
