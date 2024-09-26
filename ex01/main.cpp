/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:29:39 by jgasparo          #+#    #+#             */
/*   Updated: 2024/09/26 12:07:09 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

// PROTEGER LES GETLINES


int	main(void)
{
	Contact Contact[8];
	std::string	test;
	std::cout << "WELCOME IN THE PHONEBOOK" << std::endl;
	std::cout << "CHOOSE YOUR OPTION : ADD / SEARCH / EXIT" << std::endl;
	
	while (true)
	{
		std::getline(std::cin, test);
		if (test == "ADD") // voir si il existe un strncmp car "ADD " ne fonctionne pas
		{
			system("clear");
			std::cout << "NB: " << Contact::getNbContact() << std::endl;
			// contact[Contact::getNbContact()].Contact();
			Contact[Contact::getNbContact()].SetContact();
			Contact[Contact::getNbContact()].ShowContact();
		}
		if (test == "EXIT")
			break ;
		if (test == "SEARCH")
		{
			std::cout << "Which contact do you want to see ? ";
			// CHECKER SI L'INDEX EST COMPRIS ENTRE 1 ET 8
			std::getline(std::cin, test);
			Contact[PhoneBook::setindex(std::stoi(test))].ShowContact(); // need to protect stoi avec les char lol
		}
		else
			continue;
	}
	std::cout << "NB Contact : " << Contact::getNbContact() << std::endl;
	std::cout << "Test contient : " << test << std::endl;
	return 0;
}
