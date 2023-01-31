/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 21:45:52 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/31 14:14:33 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int _val;
        static const int _numOfFracBits;
        
    public:
        Fixed();
        Fixed(const int val);
        Fixed(const float val);
        Fixed(const Fixed& fixedNum);
        Fixed& operator=(const Fixed& fixedNum);
        ~Fixed();
        
        bool operator>(const Fixed& fixedNum) const;
        bool operator<(const Fixed& fixedNum) const;
        bool operator>=(const Fixed& fixedNum) const;
        bool operator<=(const Fixed& fixedNum) const;
        bool operator==(const Fixed& fixedNum) const;
        bool operator!=(const Fixed& fixedNum) const;
        
        Fixed operator+(const Fixed& fixedNum) const;
        Fixed operator-(const Fixed& fixedNum) const;
        Fixed operator*(const Fixed& fixedNum) const;
        Fixed operator/(const Fixed& fixedNum) const;

        Fixed operator++(void);
        Fixed operator++(int);
        Fixed operator--(void);
        Fixed operator--(int);
        
        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);

        static Fixed& min(Fixed& fixedPoint1, Fixed& fixedPoint2);
        static const Fixed& min(const Fixed& fixedPoint1, const Fixed& fixedPoint2);
        static Fixed& max(Fixed& fixedPoint1, Fixed& fixedPoint2);
        static const Fixed& max(const Fixed& fixedPoint1, const Fixed& fixedPoint2);
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed);

#endif