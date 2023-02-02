/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ALiteral.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 12:15:13 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/02 18:52:34 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALITERAL_HPP
# define ALITERAL_HPP

#include "convert.hpp"

class ALiteral {
    private:
        ALiteral();
        ALiteral(const ALiteral& other);
        ALiteral& operator=(const ALiteral& other);
        
    protected:
        std::string _input;
        
    public:
        ALiteral(const std::string input);
        virtual ~ALiteral();

        virtual void    toChar(void) = 0;
        // virtual void     toInt(void) = 0;
        // virtual void  toDouble(void) = 0;
        // virtual void   toFloat(void) = 0;
        
        virtual void    toActualType(void) = 0;
        void    displayAllConversions(LitType type);
};

#endif
