/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialize.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 14:35:43 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/03 15:18:02 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <iostream>

#include "Data.hpp"

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);

#endif
