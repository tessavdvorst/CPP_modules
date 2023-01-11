/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 13:14:09 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/11 18:01:55 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {
	private:
    	std::string _name;
		
	public:
		Zombie(std::string name);
		~Zombie(void);
		
		void announce(void);
		void setName(std::string name);
		std::string getName(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif