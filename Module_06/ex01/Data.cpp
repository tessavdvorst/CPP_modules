/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 14:31:07 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/03 15:36:00 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(): _val(0) {}

Data::Data(const Data& other)
{
    *this = other;
}

Data::~Data() {}

Data& Data::operator=(const Data& other)
{
    this->_val = other._val;
    return (*this);
}

int Data::getVal(void)
{
    return (this->_val);
}

void Data::setVal(int newVal)
{
    this->_val = newVal;
}
