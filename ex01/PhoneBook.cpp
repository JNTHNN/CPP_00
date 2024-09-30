/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:45:03 by jgasparo          #+#    #+#             */
/*   Updated: 2024/09/30 15:31:10 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	PhoneBook::setindex(int i)
{
	if (Contact::getNbContact() >= 9)
		return PhoneBook::_Index = (i - 1) % 8;
	return PhoneBook::_Index = 0;
}

int	PhoneBook::_Index = 0;

PhoneBook::PhoneBook()
{
	std::cout << "Ca construit le phonebook" << std::endl;
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PHONEBOOK WILL SELF-DESTRUCT IN 3 ... 2 ... 1 ..." << std::endl;
	return ;
}

void	PhoneBook::welcome(void) const
{
	std::cout << "WELCOME IN THE PHONEBOOK" << std::endl;
}

void	PhoneBook::choose_option(void) const
{
	std::cout << "CHOOSE YOUR OPTION : ADD / SEARCH / EXIT" << std::endl;
}

bool	PhoneBook::check_index(std::string option)
{
	try
	{
		std::stoi(option);
	}
	catch (const std::invalid_argument &test)
	{
		std::cerr << "Input not an number, try again" << std::endl;
		return false;
	}
	catch (const std::out_of_range &test)
	{
		std::cerr << "Input not between 1 and 8 or ALL, try again" << std::endl;
		return false;
	}
	return true;
}