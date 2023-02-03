/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialize.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 14:35:41 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/03 15:40:19 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t i = reinterpret_cast<uintptr_t>(ptr);
    return (i);
}

Data* deserialize(uintptr_t raw)
{
    Data* data = reinterpret_cast<Data*>(raw);
    return (data);
}
