/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ALiteral.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 12:15:13 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/01 19:25:57 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALITERAL_HPP
# define ALITERAL_HPP

#include "convert.hpp"

class ALiteral {
    private:
        std::string _input;
        
        ALiteral();
        ALiteral(const ALiteral& other);
        ALiteral& operator=(const ALiteral& other);
        
        void    displayConversions(void);
        
    public:
        ALiteral(const std::string input);
        virtual ~ALiteral();
        
        
        virtual void convert(void) = 0;
        char    toChar(void);
        int     toInt(void);
        // double  toDouble(void);
        // float   toFloat(void);
};

#endif
