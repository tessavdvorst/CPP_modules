/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/16 13:21:08 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/16 16:17:24 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    return;
}

Harl::~Harl(void)
{
    return;
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\n\n";
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!\n\n";
}
void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n\n";
}
void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

int Harl::getLevelIndex(std::string level)
{
    int index;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (index = 0; index < 4; index++)
    {
        if (levels[index] == level)
            return (index);
    }
    return (-1);
}

void Harl::complain(std::string level)
{
    int index = getLevelIndex(level);
    if (index == -1)
    {
        std::cout << "[ Probably complaining about insignificant problems ]\n";
        return;
    }
    
    switch (index)
    {
        case 0:
            std::cout << "[ DEBUG ]\n";
            debug();
        case 1:
            std::cout << "[ INFO ]\n";
            info();
        case 2:
            std::cout << "[ WARNING ]\n";
            warning();
        case 3:
            std::cout << "[ ERROR ]\n";
            error();
    }
}