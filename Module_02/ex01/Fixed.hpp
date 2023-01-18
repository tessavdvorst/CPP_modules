/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 11:56:36 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/18 22:14:13 by Tessa         ########   odam.nl         */
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
        Fixed(const int val);
        Fixed(const float val);
        Fixed(const Fixed& other);
        ~Fixed();
        
        Fixed& operator=(const Fixed& other);
        
        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int raw);
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed);

#endif