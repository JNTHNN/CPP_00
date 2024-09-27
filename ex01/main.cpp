/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:29:39 by jgasparo          #+#    #+#             */
/*   Updated: 2024/09/27 11:29:08 by jgasparo         ###   ########.fr       */
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
	Contact Contact[8];
	std::string	option;
	std::cout << "WELCOME IN THE PHONEBOOK" << std::endl;
	std::cout << "CHOOSE YOUR OPTION : ADD / SEARCH / EXIT" << std::endl;
	
	while (true)
	{
		std::getline(std::cin, option); // a proteger du ctrl + d
		if (option == "ADD") // voir si il existe un strncmp car "ADD " ne fonctionne pas
		{
			system("clear");
			std::cout << "NB: " << Contact::getNbContact() << std::endl;
			// contact[Contact::getNbContact()].Contact();
			Contact[Contact::getNbContact()].SetContact();
			Contact[Contact::getNbContact()].ShowContact();
		}
		if (option == "EXIT")
			break ;
		if (option == "SEARCH")
		{
			std::cout << "Which contact do you want to see ? ";
			// CHECKER SI L'INDEX EST COMPRIS ENTRE 1 ET 8
			std::getline(std::cin, option);
			Contact[PhoneBook::setindex(std::stoi(option))].ShowContact(); // need to protect stoi avec les char lol
		}
		if (option.empty())
			std::cout << "Fill please ..." << std::endl;
		else
		{
			std::cout << "Unrecognized Option, Try Again !" << std::endl;
			continue;
		}
	}
	std::cout << "NB Contact : " << Contact::getNbContact() << std::endl;
	std::cout << "option contient : " << option << std::endl;
	return 0;
}
