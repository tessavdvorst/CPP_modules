/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 11:37:53 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/30 15:57:00 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): 
                        AForm(145, 137, "Shrubbery Creation Form") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): 
                        AForm(145, 137, "Shrubbery Creation Form"),
                        _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):
                        AForm(145, 137, "Shrubbery Creation Form"),
                        _target(other._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

bool ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    try {
        this->executeCheck(executor);
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << "\n";
        return (false);
    }
    const std::string fileName = this->_target + "_shrubbery";
    std::ofstream newFile(fileName);
    if (!newFile)
    {
        std::cerr << "Not able to open " << fileName << "\n";
        return (false);
    }
    newFile << 
            "    ccee88oo            \n" <<
            "   C8O8O8Q8PoOb o8oo    \n" <<
            "dOB69QO8PdUOpugoO9bD    \n" <<    
            "CgggbU8OU qOp qOdoUOdcb \n" << 
            "  6OuU  /p u gcoUodpP   \n" <<
            "    \\\\//  /douUP      \n" <<       
            "      \\\\////          \n" <<       
            "       |||||           \n" <<          
            "       |||||           \n" <<         
            "       |||||           \n" <<        
            "....../|||||\\......   \n";
    newFile.close();
    return (true);
}
