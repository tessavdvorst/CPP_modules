/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   identify.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 15:43:43 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/03 16:29:04 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
