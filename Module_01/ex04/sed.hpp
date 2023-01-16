/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/16 15:37:39 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/16 15:58:18 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>

void copyAndReplaceLine(std::ofstream& file, std::string line, std::string oldStr, std::string newStr);
void copyAndReplaceFile(std::string s1, std::string s2, std::string fileName, std::string newFileName);

#endif