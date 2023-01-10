/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 12:27:53 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/10 11:04:14 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
	private:
		static int _contactId;
		std::string _first_name;
		std::string _last_name;
		std::string _nick_name;
		std::string _phone_number;
		std::string _darkest_secret;
	
	public:
		Contact(void);
		~Contact(void);
		
		void displayContact(void);
		bool getContactInfo(void);
		bool askUserInput(std::string prompt, std::string type);
		
		void setContactId(char c);
		void setFirstName(std::string first_name);
		void setLastName(std::string last_name);
		void setNickName(std::string nick_name);
		void setPhoneNumber(std::string phone_number);
		void setDarkestSecret(std::string darkest_secret);

		int getContactId(void);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string getPhoneNumber(void);
		std::string getDarkestSecret(void);
};

bool isEmptyField(std::string input);

#endif