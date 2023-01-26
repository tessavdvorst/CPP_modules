/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 12:17:09 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/26 11:39:18 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called\n";
    return;
}

Brain::Brain(const Brain& brain)
{
    std::cout << "Brain copy constructor called\n";
    *this = brain;
    return;
}

Brain::~Brain()
{
    std::cout << "Brain default destructor called\n";
    return;
}

Brain& Brain::operator=(const Brain& brain)
{
    for (int i = 0; i < IDEASIZE; i++)
        this->_ideas[i] = brain._ideas[i];
    std::cout << "Brain copy assignment operator called\n";
    return (*this);
}

std::string Brain::getIdea(int index) const
{
    if (index < IDEASIZE)
        return (this->_ideas[index]);
    std::cerr << "Not idea at index " << index << "\n";
    return ("");
}

void Brain::setIdea(std::string idea, int index)
{
    if (index < IDEASIZE)
        this->_ideas[index] = idea;
    else
        std::cerr << "Not able to set idea at index " << index << "\n";
}