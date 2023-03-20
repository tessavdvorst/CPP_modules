/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/17 12:06:03 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/03/20 13:29:29 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <map>
# include <vector>

void 							erase_whitespace_chars_both_sides(std::string& str);
float							str_to_float(std::string str);
bool							is_valid_date(std::vector<int> date);

template <typename T>
void	print_vector(std::vector<T> vec) {
	typename std::vector<T>::iterator it;
	for (it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << "\n";
}

template <typename T>
void	split_into_vector(const std::string& line, char d, std::vector<T>& vec) {
	std::string str;
	std::stringstream ss(line);
	
	while (getline(ss, str, d))
	{
		erase_whitespace_chars_both_sides(str);
		T element;
		std::istringstream ssstr(str);
		ssstr >> element;
		vec.push_back(element);
	}
}



#endif
