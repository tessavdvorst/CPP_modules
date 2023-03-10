/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 12:28:35 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/11 17:38:05 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <sstream>
#include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
        
    public:
        PhoneBook();
        ~PhoneBook();

        void add(void);
        std::string truncAndAddDot(std::string);
        int checkAmountContacts(Contact *contacts);
        void printHeader(void);
        void printEntry(Contact contact);
        void search(void);
        int searchEntry(std::string input);
        void saveContact(Contact contact, int id);
};

#endif