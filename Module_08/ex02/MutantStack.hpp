/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 15:43:50 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/13 11:02:00 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
    public:
        MutantStack(): std::stack<T>() {};
        MutantStack(const MutantStack& other): std::stack<T>(other) {};
        ~MutantStack() {};
        
        MutantStack& operator=(const MutantStack& other) { std::stack<T>::operator=(other); return (*this); };
        
        typedef typename std::stack<T>::container_type::iterator iterator;
        
        iterator begin(void) { return (this->c.begin()); };
        iterator end(void) { return (this->c.end()); };
};

#endif
