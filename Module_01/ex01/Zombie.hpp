/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 18:17:06 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/11 21:58:12 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {
	private:
    	std::string _name;
		
	public:
		Zombie(void);
		~Zombie(void);
		
		void setName(std::string name);
		std::string getName(void);
		void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif