/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:53:51 by jgasparo          #+#    #+#             */
/*   Updated: 2024/09/26 11:06:53 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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
	std::cout << "First name : " << _first_name << std::endl;
	std::cout << "Last Name : " << _last_name << std::endl;
	std::cout << "Nickname : " << _nickname << std::endl;
	std::cout << "Phone number : " << _phone_number << std::endl;
	std::cout << "Darkest Secret : " << _secret << std::endl;
	Contact::_nbContact += 1; // permet de savoir combien ya de contact
	return ;
}
void	Contact::SetContact(void)
{
		std::cout << "Enter first name: ";
		std::getline(std::cin, _first_name);
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