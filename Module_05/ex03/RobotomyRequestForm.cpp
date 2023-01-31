/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 16:10:02 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/31 10:30:43 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): 
                        AForm(72, 45, "Robotomy Request Form") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target): 
                        AForm(72, 45, "Robotomy Request Form"),
                        _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other):
                        AForm(72, 45, "Robotomy Request Form"),
                        _target(other._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

bool RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    try {
        this->executeCheck(executor);
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << "\n";
        return (false);
    }
    std::cout << "* SOME DRILLING NOISES *\n";
    
    unsigned int seed = std::chrono::system_clock::now().time_since_epoch().count();
    srand(seed);
	int random = rand() % 2;
    if (random % 2 == 0)
        std::cout << this->_target << " is successfully robotomized\n";
    else
        std::cout << "Robotomy has failed\n";
    return (true);
}
