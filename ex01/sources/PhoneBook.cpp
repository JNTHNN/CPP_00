/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:45:03 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/02 22:22:34 by jgasparo         ###   ########.fr       */
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

void	PhoneBook::display(void) const
{
	std::cout << std::setfill(' ') << std::setw(10) << "INDEX" << PIPE;
	std::cout << std::setfill(' ') << std::setw(10) << "FIRST NAME" << PIPE;
	std::cout << std::setfill(' ') << std::setw(10) << "LAST NAME" << PIPE;
	std::cout << std::setfill(' ') << std::setw(10) << "NICKNAME" << PIPE << std::endl;
	std::cout << std::setfill('-') << std::setw(45) << EMPTY << std::endl;
}

bool	PhoneBook::chooseOption(void) const
{
	if (std::cin.eof())
			return false;
	std::cout << CHOOSE_OPTION << std::endl;
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
		if (!Contact::getNbContact())
		{
			std::cout << NO_CONTACT << std::endl;
			return false;
		}
		display();
		for (int i = 0; i < Contact::getNbContact(); i++)
		{
			Contacts[i].showAllContact(i + 1);
			std::cout << std::setfill('-') << std::setw(45) << EMPTY << std::endl;
		}
		std::cout << WHICH << std::endl;
		if (!safeGetline(_option))
			return false;
		int	index = safeAtoi(_option);
		if (index == ERROR)
			return true;
		Contacts[index - 1].showContact(index);
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
