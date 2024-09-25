/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:53:51 by jgasparo          #+#    #+#             */
/*   Updated: 2024/09/25 12:23:48 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Initialisation du contact" << std::endl;
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->secret = "";
	return ;
}

void Contact::ShowContact()
{
	std::cout << "First name : " << first_name << std::endl;
	std::cout << "Last Name : " << last_name << std::endl;
	std::cout << "Nickname : " << nickname << std::endl;
	std::cout << "Phone number : " << phone_number << std::endl;
	std::cout << "Darkest Secret : " << secret << std::endl;
	return ;
}
void	Contact::SetContact(void)
{
    	std::cout << "Entrez le prénom: ";
        std::getline(std::cin, first_name);
        std::cout << "Entrez le nom de famille: ";
        std::getline(std::cin, last_name);
        std::cout << "Entrez le surnom: ";
        std::getline(std::cin, nickname);
        std::cout << "Entrez le numéro de téléphone: ";
        std::getline(std::cin, phone_number);
        std::cout << "Entrez le secret: ";
        std::getline(std::cin, secret);
}