/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/01 13:59:08 by Tessa         #+#    #+#                 */
/*   Updated: 2023/01/01 18:02:26 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			std::cout << (char) toupper(argv[i][j]);
			j++;
		}
		if (i + 1 == argc)
			std::cout << std::endl;
		else
			std::cout << " ";
		i++;
	}
	return (0);
}