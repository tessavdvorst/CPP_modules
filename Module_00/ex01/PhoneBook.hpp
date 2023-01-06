/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 12:28:35 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/06 17:29:10 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
        
    public:
        PhoneBook();
        ~PhoneBook();

        void add(void);
        void printContact(Contact contact);
        void search(void);
        void saveContact(Contact contact, int id);
};

#endif