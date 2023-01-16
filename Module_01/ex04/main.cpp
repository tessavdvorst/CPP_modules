/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/13 16:01:50 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/16 15:57:30 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char *argv[])
{
    if (argc != 4)
        std::cerr << "Error: invalid amount of arguments.\n";
    else
    {
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        std::string fileName = argv[1];
        std::string newFileName = fileName + ".replace";
        copyAndReplaceFile(s1, s2, fileName, newFileName);
    }
    return (0);
}
