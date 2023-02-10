/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 10:35:47 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/10 15:40:45 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _N(0) {}

Span::Span(const unsigned int N): _N(N) {}

Span::Span(const Span& other)
{
    *this = other;
}

Span::~Span() {}

Span& Span::operator=(const Span& other)
{
    this->_N = other._N;
    this->_intVec = other._intVec;
    return (*this);
}

const char* Span::MaxSizeReachedException::what() const throw()
{
	return "not possible to add number";
}

const char* Span::NoSpanFoundException::what() const throw()
{
	return "span cannot be found";
}

void Span::addNumber(int num)
{
    if (this->_intVec.size() == this->_N)
        throw MaxSizeReachedException();
    this->_intVec.push_back(num);
}

unsigned int Span::shortestSpan(void)
{
    if (this->_intVec.size() <= 1)
        throw NoSpanFoundException();
    std::sort(this->_intVec.begin(), this->_intVec.end());
    return (this->_intVec[1] - this->_intVec[0]);
}

unsigned int Span::longestSpan(void)
{
    if (this->_intVec.size() <= 1)
        throw NoSpanFoundException();
    std::sort(this->_intVec.begin(), this->_intVec.end());
    return (this->_intVec[this->_intVec.size()-1] - this->_intVec[0]);
}

std::vector<int> Span::getIntVec(void) const
{
    return (this->_intVec);
}

std::ostream& operator<<(std::ostream& output, const Span& span)
{
    for (int i = 0; i < static_cast<int>(span.getIntVec().size()); i++)
        output << span.getIntVec()[i] << " ";
    output << "\n";
    return (output);
}
