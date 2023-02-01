/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   CharLiteral.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 15:26:42 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/01 19:27:19 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARLITERAL_HPP
# define CHARLITERAL_HPP

#include "ALiteral.hpp"

class CharLiteral: public ALiteral {
      private:
        const char      _c;
        ConversionState _cState;
        
        CharLiteral();
        CharLiteral(const CharLiteral& other);
        
        CharLiteral& operator=(const CharLiteral& other);

      public:
        CharLiteral(const std::string input);
        ~CharLiteral();
      
        void convert(void);
};

#endif
