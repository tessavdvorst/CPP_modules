/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   CharLiteral.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 15:26:42 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/01 15:40:35 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARLITERAL_HPP
# define CHARLITERAL_HPP

#include "Literal.hpp"

class CharLiteral: public Literal {
      private:
        const char      _c;
        ConversionState _cState;
        
        CharLiteral();
        CharLiteral(const CharLiteral& other);
        CharLiteral& operator=(const CharLiteral& other);

      public:
        CharLiteral(const char c, const std::string input);
        ~CharLiteral();

        
};

#endif
