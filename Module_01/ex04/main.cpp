/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/13 16:01:50 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/13 18:11:04 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

// Create a program that takes three parameters in the following order: a filename and
// two strings, s1 and s2.

// It will open the file <filename> and copies its content into a new file
// <filename>.replace, replacing every occurrence of s1 with s2.

// Using C file manipulation functions is forbidden and will be considered cheating. All
// the member functions of the class std::string are allowed, except replace. Use them
// wisely!
// Of course, handle unexpected inputs and errors. You have to create and turn in your
// own tests to ensure your program works as expected.

// void findIndexSubString(std::string str, std::string subStr)
// {
//     int index = 0;
//     while ((index = str.find(subStr, index)) != (int)std::string::npos)
//     {
//         std::cout << "\"" << subStr << "\" " << "found\n";
//         index += subStr.length();
//     }
// }

void copyAndReplaceString(std::ofstream& file, std::string line, std::string oldStr, std::string newStr)
{
    int prevIndex = 0;
    int currentIndex = 0;
    int count = 0;
    std::string oldStrWithSpace = " " + oldStr + " ";
    std::string newStrWithSpace = " " + newStr + " ";
    while ((currentIndex = line.find(oldStrWithSpace, currentIndex)) != (int)std::string::npos)
    {
        file << line.substr(prevIndex, currentIndex - 1);
        file << newStr;
        currentIndex += oldStr.length();
        prevIndex = currentIndex;
        count++;
    }
    if (prevIndex != (int)line.length())
        file << line.substr(prevIndex, (int)line.length()) << "\n";
}

int main(int argc, char *argv[])
{
    std::string line;
    std::string newLine;
    std::string fileName = argv[1];
    std::string newFileName = fileName + ".replace";
    std::ifstream file(fileName);
    std::ofstream newFile(newFileName);
    
    if (argc != 4)
        std::cerr << "Error: invalid amount of arguments.\n";
    else if (!file)
        std::cerr << "Error: invalid file\n";
    else if (!newFile)
        std::cerr << "Error: cannot create file\n";
    else
    {
        while (getline(file, line))
        {
            if (line == "\n")
                newFile << "\n";
            else
                copyAndReplaceString(newFile, line, argv[2], argv[3]);
        }
    }
    file.close();
    newFile.close();
    return (0);
}