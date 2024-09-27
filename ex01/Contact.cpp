/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:53:51 by jgasparo          #+#    #+#             */
/*   Updated: 2024/09/27 14:50:25 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

// faire l'init avec la methode : 
Contact::Contact(void) : _first_name(EMPTY), _last_name(EMPTY), _nickname(EMPTY), _phone_number(EMPTY), _secret(EMPTY)
{
	std::cout << "Initialisation du contact" << std::endl;
	return ;
}

Contact::~Contact()
{
	std::cout << "Ca detruit le contact" << std::endl;
	Contact::_nbContact -= 1;
	return ;
}

int	Contact::getNbContact(void)
{
	if (Contact::_nbContact >= 8)
		Contact::_nbContact = 0;
	return Contact::_nbContact;
}

void Contact::ShowContact()
{
	// trouver moyen de faire une boucle
	std::cout << std::setfill (' ') << std::setw (10) << _first_name << "|";
	std::cout << std::setfill (' ') << std::setw (10) << _last_name << "|";
	std::cout << std::setfill (' ') << std::setw (10) << _nickname << "|";
	std::cout << std::setfill (' ') << std::setw (10) << _phone_number << "|";
	std::cout << std::setfill (' ') << std::setw (10) << _secret << std::endl;
	Contact::_nbContact += 1; // permet de savoir combien ya de contact
	return ;
}
void	Contact::SetContact(void)
{
		// verifier ce qui est rentrer ex pour le num
		// trouver moyen de faire boucle pour add chaque donnee + tronquer
		std::cout << "Enter first name: ";
		std::getline(std::cin, _first_name);
		if (_first_name.length() >= 10)
		{
			_first_name.resize(9);
			_first_name.resize(10,'.');
		}
		std::cout << "Enter last name: ";
		std::getline(std::cin, _last_name);
		std::cout << "Enter nickname: ";
		std::getline(std::cin, _nickname);
		std::cout << "Enter phone number: ";
		std::getline(std::cin, _phone_number);
		std::cout << "Enter his darkest secret: ";
		std::getline(std::cin, _secret);
		std::cout << "Contact successfully added" << std::endl;
		return ;
}

int	Contact::_nbContact = 0;