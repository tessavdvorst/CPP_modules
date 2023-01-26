/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 12:17:11 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/26 11:38:42 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define IDEASIZE 100

class Brain {
    private:
        std::string _ideas[IDEASIZE];
        
    public:
        Brain();
        Brain(const Brain& Brain);
        ~Brain();
        
        Brain& operator=(const Brain& brain);
        
        std::string getIdea(int index) const;
        void setIdea(std::string idea, int index);
};

#endif