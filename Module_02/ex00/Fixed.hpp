/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/17 17:05:16 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/18 14:30:55 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int _val;
        static const int _numOfFracBits = 8;
        
    public:
        Fixed();
        Fixed(const Fixed& fixedNum);
        ~Fixed();
        
        Fixed& operator=(const Fixed& fixedNum);
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif