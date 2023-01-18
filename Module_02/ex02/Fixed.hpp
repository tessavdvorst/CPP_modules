/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 21:45:52 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/18 22:30:16 by Tessa         ########   odam.nl         */
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
        Fixed(const Fixed& fixedNum);
        ~Fixed();
        
        Fixed& operator=(const Fixed fixedNum);
        bool operator>(const Fixed fixedNum);
        bool operator<(const Fixed fixedNum);
        bool operator>=(const Fixed fixedNum);
        bool operator<=(const Fixed fixedNum);
        bool operator==(const Fixed fixedNum);
        bool operator!=(const Fixed fixedNum);
        
        Fixed operator+(const Fixed fixedNum);
        Fixed operator-(const Fixed fixedNum);
        Fixed operator*(const Fixed fixedNum);
        Fixed operator/(const Fixed fixedNum);

// • The 4 increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement) operators, that will increase or decrease the fixed-point value from the smallest representable ε such as 1 + ε > 1.

        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);

        // static Fixed& min(Fixed& fixedPoint1, Fixed& fixedPoint2);
        // static Fixed& min(const Fixed& fixedPoint1, const Fixed& fixedPoint2);
        // static Fixed& max(Fixed& fixedPoint1, Fixed& fixedPoint2);
        // static Fixed& max(const Fixed& fixedPoint1, const Fixed& fixedPoint2);
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed);

#endif