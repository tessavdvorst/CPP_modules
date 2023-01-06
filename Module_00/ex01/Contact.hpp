/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 12:27:53 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/06 18:13:46 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact {
	private:
		static int contactId;
		std::string _first_name;
		std::string _last_name;
		std::string _nick_name;
		std::string _phone_number;
		std::string _darkest_secret;
	
	public:
		Contact(void);
		~Contact(void);
		
		void getContactInfo(void);
		
		void setContactId(void);
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

#endif