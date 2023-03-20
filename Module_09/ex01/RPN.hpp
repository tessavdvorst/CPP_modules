/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 13:35:26 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/20 16:10:11 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <sstream>
# include <exception>

class RPN {
	private:
		std::stack<int> _calculation;
		const std::string _expression;
		
		RPN();
		
	public:
		RPN(const std::string expression);
		RPN(const RPN& that);
		~RPN();

		RPN& operator=(const RPN& that);
		
		class DivisionByZeroException: public std::exception {
            public:
                const char* what() const throw() {return "division by zero";};
        };
		
		class BadInputException: public std::exception {
            public:
                const char* what() const throw() {return "bad input";};
        };
		
		class InvalidCalculationException: public std::exception {
            public:
                const char* what() const throw() {return "invalid calculation";};
        };
		
		bool	is_digit(const char *str);
		void	execute_operation(char c, int a, int b);
		void	calculate(void);
};

#endif
