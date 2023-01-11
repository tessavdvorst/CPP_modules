/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 12:27:53 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/11 17:41:39 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>
# include <iomanip>

class Contact {
	private:
		static int _contactId;
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
	
	public:
		Contact(void);
		~Contact(void);
		
		void displayContact(void);
		bool getContactInfo(void);
		bool setUserInput(std::string prompt, std::string type);
		
		void setContactId(char c);
		void setFirstName(std::string firstName);
		void setLastName(std::string lastName);
		void setNickName(std::string nickName);
		void setPhoneNumber(std::string phoneNumber);
		void setDarkestSecret(std::string darkestSecret);

		int getContactId(void);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string getPhoneNumber(void);
		std::string getDarkestSecret(void);
};

#endif