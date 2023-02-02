/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   OutputGenerator.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 16:26:28 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/02 18:30:56 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUTPUTGENERATOR_HPP
# define OUTPUTGENERATOR_HPP

#include "Parser.hpp"

class OutputGenerator {
	private:
	
	public:
		OutputGenerator(std::string input, LitType type);
		
		
		// class NonDisplayableException: public std::exception {
		// 	public:
		// 		const char* what() const throw();
		// };

		void displayOutput();
};

#endif
