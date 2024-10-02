/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:45:03 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/02 11:26:57 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int		PhoneBook::index = 0;
bool	PhoneBook::exit = false;

int	PhoneBook::setindex(int i)
{
	if (Contact::getNbContact() >= 8)
		return PhoneBook::index = i % 8;
	return PhoneBook::index;
}

PhoneBook::PhoneBook(void)
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
	system(CLEAR);
	std::cout << WELCOME << std::endl;
}

bool	PhoneBook::chooseOption(void) const
{
	if (std::cin.eof())
			return false;
	std::cout << CHOOSE_OPTION << std::endl;
	return true;
}

bool	PhoneBook::checkIndex(std::string option)
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

bool	PhoneBook::getOption(void)
{
	return safeGetline(PhoneBook::option);
}

bool	PhoneBook::setOption(void)
{
	if (!PhoneBook::option.compare(ADD))
	{
		system(CLEAR);
		PhoneBook::index = PhoneBook::setindex(PhoneBook::index);
		if (PhoneBook::Contacts[PhoneBook::index].setContact())
			return false;
		PhoneBook::index++;
		return true;
	}
	if (!PhoneBook::option.compare(EXIT))
		return PhoneBook::exit = true;
	if (!PhoneBook::option.compare(SEARCH))
	{
		system(CLEAR);
		std::cout << WHICH << std::endl;
		if (!safeGetline(PhoneBook::option))
			return false;
		if (!PhoneBook::option.compare(ALL))
		{
			for (int i = 0; i < Contact::getNbContact(); i++)
				PhoneBook::Contacts[i].showContact(i + 1);
			return true;
		}
		if (!PhoneBook::checkIndex(PhoneBook::option))
			return true;
		PhoneBook::Contacts[std::stoi(PhoneBook::option) - 1].showContact(std::stoi(PhoneBook::option));
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
