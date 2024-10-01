/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:53:51 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/01 09:31:34 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>
#include <iostream>

Contact::Contact(void) : _first_name(EMPTY), _last_name(EMPTY), _nickname(EMPTY), _phone_number(EMPTY), _secret(EMPTY)
{
	std::cout << "Initialisation du contact" << std::endl;
	return ;
}

Contact::~Contact()
{
	Contact::_nbContact -= 1;
	return ;
}

int	Contact::getNbContact(void)
{
	if (Contact::_nbContact >= 8)
		return Contact::_nbContact = 8;
	return Contact::_nbContact;
}

// void Contact::ShowContact(int index)
// {
// 	std::string			*fieldDatas[3] = {&_first_name, &_last_name, &_nickname};

// 	std::cout << "C'est quoi :" << index << std::endl;
// 	// trouver moyen de faire une boucle
// 	// if (index == 9)
// 	// {
// 	// 	for(int i = 0; i < Contact::getNbContact(); ++i)
// 	// 		ShowContact(i + 1);
// 	// 	return ;
// 	// }
// 	if (index < 1 || index > 8)
// 	{
// 		std::cout << "Wrong index" << std::endl;
// 		return ;
// 	}
// 	if (Contact::getNbContact() < index)
// 	{
// 		std::cout << "Contact not filled" << std::endl;
// 		return ;
// 	}
// 	std::cout << std::setfill(' ') << std::setw(10) << index << "|";
// 	for (int i = 0; i < 3; i++)
// 		std::cout << std::setfill(' ') << std::setw(10) << *fieldDatas[i] << "|";
// 	std::cout << std::endl;
	
// 	return ;
// }

void Contact::ShowContact(int index)
{
	std::string* fieldDatas[3] = {&_first_name, &_last_name, &_nickname};

	// Affichage d'un seul contact si l'index est compris entre 1 et 8
	if (index >= 1 && index <= 8)
	{
		// Si le contact à cet index est vide
		if (Contact::getNbContact() < index)
		{
			std::cout << "Contact not filled" << std::endl;
			return;
		}

		// Afficher les informations du contact
		std::cout << std::setfill(' ') << std::setw(10) << index << "|";
		for (int i = 0; i < 3; i++)
			std::cout << std::setfill(' ') << std::setw(10) << *fieldDatas[i] << "|";
		std::cout << std::endl;
	}
	// Si l'index vaut 9 (cas "ALL"), afficher tous les contacts
	else if (index == 9)
	{
		// Boucle pour afficher tous les contacts enregistrés
		for (int i = 1; i <= Contact::getNbContact(); ++i)
		{
			std::cout << "Affichage du contact : " << i << std::endl;
			ShowContact(i); 
		}
	}
	else
	{
		// Index invalide
		std::cout << "Wrong index" << std::endl;
		return;
	}
}

void	Contact::SetContact(void)
{
		// verifier ce qui est rentrer ex pour le num
		// trouver moyen de faire boucle pour add chaque donnee + tronquer
		std::string			*fieldDatas[5] = {&_first_name, &_last_name, &_nickname, &_phone_number, &_secret};
		int	i = 0;
		while (i < 5)
		{
			std::cout << "Enter " << Contact::_fieldNames[i] << " : ";
			std::getline(std::cin, *fieldDatas[i]);
			if (std::cin.eof())
			{
				std::cin.clear();
				std::cout << "Input ^D not accepted" << std::endl;
				continue ;
			}

			if (fieldDatas[i]->empty())
				std::cout << "No empty" << std::endl;
			else
			{
				// if (i >= 5)
				// 	break;
				if (fieldDatas[i]->length() >= 10)
				{
					fieldDatas[i]->resize(9);
					fieldDatas[i]->resize(10, '.');
				}
				i++;
			}
		}
		system("clear");
		std::cout << "Contact successfully added" << std::endl;
		Contact::_nbContact += 1; // permet de savoir combien ya de contact
		return ;
}

int	Contact::_nbContact = 0;

const std::string	Contact::_fieldNames[5] = {"first name", "last name", "nickname", "phone number", "darkest secret"};
