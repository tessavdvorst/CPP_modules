/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 14:31:09 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/03 15:35:31 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <string>

class Data {
    private:
        int _val;
        
    public:
        Data();
        Data(const Data& other);
        ~Data();

        Data& operator=(const Data& other);

        int getVal(void);
        void setVal(int newVal);
};

#endif
