/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Literal.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 12:15:13 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/01 15:41:46 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITERAL_HPP
# define LITERAL_HPP

#include <iostream>
#include <string>

enum LitType {
    CHAR,
    INT,
    DOUBLE,
    FLOAT    
};

enum ConversionState {
    NOT_SET,
    SET,
    IMPOS,
    NO_DISPLAY 
};

class Literal {
    private:
        char _c;
        int _i;
        // float _f;
        // double _d;
        LitType _type;
        ConversionState _cState;
        ConversionState _iState;
        // ConversionState _fState;
        // ConversionState _dState;
        const std::string _input;  
        
        Literal();
        
        bool    setType(void);
        void    displayConversion(void);
        
    public:
        Literal(const std::string input);
        Literal(const Literal& other);
        ~Literal();

        Literal& operator=(const Literal& other);
        
        bool    isChar(void);
        bool    isInt(void);
        // bool    isDouble(void);
        // bool    isFloat(void);
        
        void    convert(void);  
        void    toActualType(void);
        char    toChar(void);
        int     toInt(void);
        // double  toDouble(void);
        // float   toFloat(void);
};

#endif
