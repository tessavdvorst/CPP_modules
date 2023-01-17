/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/16 15:36:49 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/17 11:11:53 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void copyAndReplaceLine(std::ofstream& file, std::string line, std::string oldStr, std::string newStr)
{
    int prevIndex = 0;
    int currentIndex = 0;
    while ((currentIndex = line.find(oldStr, currentIndex)) != (int)std::string::npos)
    {
        file << line.substr(prevIndex, currentIndex - prevIndex);
        file << newStr;
        currentIndex += oldStr.length();
        prevIndex = currentIndex;
    }
    if (prevIndex != (int)line.length())
        file << line.substr(prevIndex, (int)line.length() - prevIndex);
    file << "\n";
}

void copyAndReplaceFile(std::string s1, std::string s2, std::string fileName, std::string newFileName)
{
    std::string line;
    std::string newLine;
    std::ifstream file(fileName);
    std::ofstream newFile(newFileName);
    
    if (!file)
        std::cerr << "Error: invalid file\n";
    else if (!newFile)
    {
        std::cerr << "Error: cannot create file\n";
        file.close();
        return;
    }
    else
    {
        if (s1.empty())
        {
            std::cerr << "Please insert string that needs to be replaced\n";
            return;
        }
        while (getline(file, line))
            copyAndReplaceLine(newFile, line, s1, s2);
        file.close();
        newFile.close();
    }
}