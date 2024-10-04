/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:45:03 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/04 17:08:03 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int		PhoneBook::_index = 0;
bool	PhoneBook::_exit = false;

bool	PhoneBook::getExit(void) const
{
	return _exit;
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

bool	PhoneBook::checkIndex(std::string _option)
{
	try
	{
		std::stoi(_option);
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
	return safeGetline(_option);
}

bool	PhoneBook::setOption(void)
{
	if (!_option.compare(ADD))
	{
		system(CLEAR);
		_index %= 8;
		if (Contacts[_index++].setContact())
			return false;
		return true;
	}
	if (!_option.compare(EXIT))
	{
		_exit = true;
		return true;
	}
	if (!_option.compare(SEARCH))
	{
		system(CLEAR);
		std::cout << WHICH << std::endl;
		if (!safeGetline(_option))
			return false;
		if (!_option.compare(ALL))
		{
			for (int i = 0; i < Contact::getNbContact(); i++)
				Contacts[i].showContact(i + 1);
			return true;
		}
		if (!checkIndex(_option))
			return true;
		Contacts[std::stoi(_option) - 1].showContact(std::stoi(_option));
		return true;
	}
	if (_option.empty())
		std::cerr << FILL << std::endl;
	else
	{
		std::cerr << UNRECOGNIZED << std::endl;
		return true;
	}
	return true;
}
