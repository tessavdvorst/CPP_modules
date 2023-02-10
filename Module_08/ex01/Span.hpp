/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 10:35:49 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/10 16:40:02 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span {
    private:
        unsigned int _N;
        std::vector<int> _intVec;
    
    public:
        Span();
        Span(const unsigned int N);
        Span(const Span& other);
        ~Span();

        Span& operator=(const Span& other);

        class MaxSizeReachedException: public std::exception {
            public:
                const char* what() const throw();
        };
        
        class NoSpanFoundException: public std::exception {
            public:
                const char* what() const throw();
        };
        
        void addNumber(int num);
        unsigned int shortestSpan(void);
        unsigned int longestSpan(void);

        std::vector<int> getIntVec(void) const;
};

std::ostream& operator<<(std::ostream& output, const Span& span);

#endif
