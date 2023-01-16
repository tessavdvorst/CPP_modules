/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/16 09:57:08 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/16 12:57:27 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
    private:
        typedef void (Harl::*funcPtr)();
        
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    
    public:
    Harl(void);
    ~Harl(void);

    void complain(std::string level);
};

#endif