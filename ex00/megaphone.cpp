/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:35:06 by jgasparo          #+#    #+#             */
/*   Updated: 2024/11/30 10:38:57 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (int argc, char *argv[])
{
	std::locale	loc;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int j = 1; j < argc; j++)
	{
		std::string arg = std::string(argv[j]);
		for (size_t i = 0; i < arg.length(); i++)
			std::cout << std::toupper(argv[j][i], loc);
	}
	std::cout << std::endl;
	return 0;
}
