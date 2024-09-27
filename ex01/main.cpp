/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:29:39 by jgasparo          #+#    #+#             */
/*   Updated: 2024/09/27 23:43:38 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

// PROTEGER LES GETLINES


int	main(void)
{
	PhoneBook	PhoneBook;
	
	PhoneBook.welcome();	
	while (true)
	{

		PhoneBook.choose_option();
		std::getline(std::cin, PhoneBook.option);
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cerr << "Input ^D detected. Exiting..." << std::endl;
			break;
		}
		if (PhoneBook.option == "ADD") // voir si il existe un strncmp car "ADD " ne fonctionne pas
		{
			system("clear");
			std::cout << "NB: " << Contact::getNbContact() << std::endl;
			PhoneBook.Contacts[Contact::getNbContact()].SetContact();
		}
		if (PhoneBook.option == "EXIT")
			break ;
		if (PhoneBook.option == "SEARCH")
		{
			std::cout << "Which contact do you want to see (1-8 or ALL) ? ";
			// CHECKER SI L'INDEX EST COMPRIS ENTRE 1 ET 8
			// Implementer ALL pour montrer tout les contacts ?
			std::getline(std::cin, PhoneBook.option);
			if (PhoneBook.option == "ALL")
				PhoneBook.option = "9";
			// if (isdigit(PhoneBook))
			// {
			// 	std::cout << "NON" << std::endl;
			// }
			
			PhoneBook.Contacts[PhoneBook::setindex(std::stoi(PhoneBook.option))].ShowContact(std::stoi(PhoneBook.option)); // need to protect stoi avec les char lol
			continue;
		}
		if (PhoneBook.option.empty())
			std::cerr << "Fill please ..." << std::endl;
		else
		{
			std::cerr << "Unrecognized Option, Try Again !" << std::endl;
			continue;
		}
	}
	// std::cout << "PHONEBOOK WILL SELF-DESTRUCT IN 3 ... 2 ... 1 ..." << Contact::getNbContact() << std::endl;
	return 0;
}
