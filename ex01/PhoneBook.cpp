/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:45:03 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/01 11:46:17 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int	PhoneBook::_index = 0;

int	PhoneBook::setindex(int i)
{
	if (Contact::getNbContact() >= 8)
		return PhoneBook::_index = i % 8;
	return PhoneBook::_index;
}

PhoneBook::PhoneBook()
{
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << DESTRUCTION << std::endl;
	return ;
}

void	PhoneBook::welcome(void) const
{
	std::cout << WELCOME << std::endl;
}

void	PhoneBook::choose_option(void) const
{
	std::cout << CHOOSE_OPTION << std::endl;
}

bool	PhoneBook::check_index(std::string option)
{
	try
	{
		std::stoi(option);
	}
	catch (const std::invalid_argument &test)
	{
		std::cerr << NO_NUMBER << std::endl;
		return false;
	}
	catch (const std::out_of_range &test)
	{
		std::cerr << OUT_RANGE << std::endl;
		return false;
	}
	return true;
}

bool	PhoneBook::get_option(void)
{
	return safeGetline(PhoneBook::option);
}

bool	PhoneBook::set_option(void)
{
	if (!PhoneBook::option.compare("ADD"))
	{
		system("clear");
		PhoneBook::_index = PhoneBook::setindex(PhoneBook::_index);
		std::cout << "NB: " << Contact::getNbContact() << " INDEX : " << PhoneBook::_index << std::endl;
		if (PhoneBook::Contacts[PhoneBook::_index].SetContact())
			return false;
		PhoneBook::_index++;
		return true;
	}
	if (!PhoneBook::option.compare("EXIT"))
		return false ;
	if (!PhoneBook::option.compare("SEARCH"))
	{
		system("clear");
		std::cout << WHICH << std::endl;
		if (!safeGetline(PhoneBook::option))
			return false;
		if (!PhoneBook::option.compare("ALL"))
		{
			for (int i = 0; i < Contact::getNbContact(); i++)
				PhoneBook::Contacts[i].ShowContact(i + 1);
			return true;
		}
		if (!PhoneBook::check_index(PhoneBook::option))
			return true;
		PhoneBook::Contacts[std::stoi(PhoneBook::option) - 1].ShowContact(std::stoi(PhoneBook::option)); // need to protect stoi avec les char lol
		return true;
	}
	if (PhoneBook::option.empty())
		std::cerr << FILL << std::endl;
	else
	{
		std::cerr << UNRECOGNIZED << std::endl;
		return true;
	}
	return true;
}