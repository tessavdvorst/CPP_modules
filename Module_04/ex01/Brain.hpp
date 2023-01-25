/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 12:17:11 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/25 15:37:42 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
    public:
        Brain();
        Brain(const Brain& Brain);
        ~Brain();
        
        Brain& operator=(const Brain& brain);
        
        std::string _ideas[100];
};

#endif