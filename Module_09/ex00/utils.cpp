/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/17 12:05:53 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/06/25 12:04:49 by Tessa         ########   odam.nl         */
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

int str_to_int(std::string str)
{
	char *pEnd;
	
	long int i = strtol(str.c_str(), &pEnd, 10);
    if (*pEnd != '\0' || (i < INT_MIN || i > INT_MAX))
		throw std::invalid_argument("invalid input in csv file");
	int i_value = static_cast<int>(i);
	return (i_value);
}

bool is_valid_date(int year, int month, int day)
{
	if (year < 0)
		return (false);
	if (month < 0 || month > 12)
		return (false);

	if (month == 2) {
		if (year % 4 == 0) {
			if (day > 29 || day < 0)
				return (false);
		}
		else {
			if (day > 28 || day < 0)
				return (false);
		}
	}
	else if (month == 1 || month == 3
			|| month == 5 || month == 7
			|| month == 8 || month == 10
			|| month == 12) {
		if (day > 31 || day < 0)
			return (false);
	}
	else {
		if (day > 30 || day < 0)
			return (false);
	}
	return (true);
}

