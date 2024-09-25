/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:29:39 by jgasparo          #+#    #+#             */
/*   Updated: 2024/09/25 12:19:31 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include "PhoneBook.hpp"
#include "Contact.hpp"


int	main(void)
{
	system("clear");
	Contact contact;
	std::string	test;
	std::cout << "WELCOME IN THE PHONEBOOK" << std::endl;
	std::cout << "CHOOSE YOUR OPTION : ADD / SEARCH / EXIT" << std::endl;
	
	std::getline(std::cin, test);
	Contact();
	if (test == "ADD")
	{
		contact.SetContact();
		contact.ShowContact();
	}
	std::cout << "Test contient : " << test << std::endl;
	std::cin.ignore();
	return 0;
}
