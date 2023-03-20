/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/17 12:05:53 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/20 13:19:41 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void erase_whitespace_chars_both_sides(std::string& str)
{
    str.erase(0, str.find_first_not_of(" \t\r\n\v\f"));
    str.erase(str.find_last_not_of(" \t\r\n\v\f") + 1);
}

float str_to_float(std::string str)
{
	char *pEnd;
	
	float val = static_cast<float>(strtod(str.c_str(), &pEnd));
	if (*pEnd != '\0')
		throw std::invalid_argument("invalid input in csv file");
	return (val);
}

bool is_valid_date(std::vector<int> date)
{
	if (date[0] < 0)
		return (false);
	if (date[1] < 0 || date[1] > 12)
		return (false);

	if (date[1] == 2) {
		if (date[0] % 4 == 0) {
			if (date[2] > 29 || date[2] < 0)
				return (false);
		}
		else {
			if (date[2] > 28 || date[2] < 0)
				return (false);
		}
	}
	else if (date[1] == 1 || date[1] == 3
			|| date[1] == 5 || date[1] == 7
			|| date[1] == 8 || date[1] == 10
			|| date[1] == 12) {
		if (date[2] > 31 || date[2] < 0)
			return (false);
	}
	else {
		if (date[2] > 30 || date[2] < 0)
			return (false);
	}
	return (true);
}

