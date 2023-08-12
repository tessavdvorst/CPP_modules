/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/17 12:06:03 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/06/25 12:41:09 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <map>

void 							erase_whitespace_chars_both_sides(std::string& str);
float							str_to_float(std::string str);
int								str_to_int(std::string str);
bool							is_valid_date(int year, int month, int day);

#endif
