/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:29:39 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/01 12:05:56 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	
	PhoneBook.welcome();	
	while (true)
	{
		system("clear");
		if (std::cin.eof())
			break;
		std::string	str;
		getline(std::cin, str);
		std::cout << "YA QUOI [" << str << "]" << std::endl;
		PhoneBook.choose_option();
		if (!PhoneBook.get_option())
			break;
		if (!PhoneBook.set_option())
			break;
	}
	return 0;
}
