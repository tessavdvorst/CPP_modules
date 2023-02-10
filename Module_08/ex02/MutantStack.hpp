/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 15:43:50 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/10 17:29:30 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// The std::stack container is very nice. Unfortunately, it is one of the only STL Containers that is NOT iterable. That’s too bad.
// But why would we accept this? Especially if we can take the liberty of butchering the
// original stack to create missing features.
// To repair this injustice, you have to make the std::stack container iterable.
// Write a MutantStack class. It will be implemented in terms of a std::stack.
// It will offer all its member functions, plus an additional feature: iterators.

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T, typename Container>
class MutantStack {
    private:
        std::stack<T> _stack;
        Container::iterator _it;

    public:
        MutantStack() {};
        MutantStack(const MutantStack& other) { *this = other; };
        ~MutantStack() {};
        
        MutantStack& operator=(const MutantStack& other) { this->_stack = other._stack; };
        
        int top(void) { return (this->_stack.top()); };
        int size(void) { return (this->_stack.size()); };
        void pop(void) { this->_stack.pop(); };
        void push(int n) { this->_stack.push(n); };
        
        iterator begin(void) 
        { 
            return (Container<T>.begin());
        };
        
        iterator end(void)
        {
            return (Container<T>.end());
        };
};

#endif
