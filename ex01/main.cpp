/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:29:39 by jgasparo          #+#    #+#             */
/*   Updated: 2024/09/30 15:39:48 by jgasparo         ###   ########.fr       */
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
		if (!std::getline(std::cin, PhoneBook.option))  // Si getline échoue
		{
			if (std::cin.eof())  // Si la cause est la fin du fichier (Ctrl+D)
			{
				std::cerr << "Input ^D detected. Exiting..." << std::endl;
				std::cin.clear();  // Réinitialise les flags d'erreur du flux
				break;
			}
		}
		// std::getline(std::cin, PhoneBook.option);
		// if (std::cin.eof())
		// {
		// 	std::cin.clear();
		// 	std::cerr << "Input ^D detected. Exiting..." << std::endl;
		// 	break;
		// }
		if (PhoneBook.option == "ADD") // voir si il existe un strncmp car "ADD " ne fonctionne pas
		{
			system("clear");
			std::cout << "NB: " << Contact::getNbContact() << "INDEX : " << PhoneBook::setindex(Contact::getNbContact()) << std::endl;
			PhoneBook.Contacts[PhoneBook::setindex(Contact::getNbContact())].SetContact();
		}
		if (PhoneBook.option == "EXIT")
			break ;
		if (PhoneBook.option == "SEARCH")
		{
			std::cout << "Which contact do you want to see (1-8 or ALL) ? ";
			// CHECKER SI L'INDEX EST COMPRIS ENTRE 1 ET 8
			// Implementer ALL pour montrer tout les contacts ?
			std::getline(std::cin, PhoneBook.option);
			if (!PhoneBook.option.compare("ALL"))
			{
				for (int i = 0; i < Contact::getNbContact(); ++i)
					PhoneBook.Contacts[PhoneBook::setindex(i + 1)].ShowContact(i + 1);
				continue;
			}
			if (!PhoneBook.check_index(PhoneBook.option))
				continue;
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
