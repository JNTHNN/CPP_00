/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:53:51 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/04 17:09:19 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int					Contact::_nbContact = 0;
const std::string	Contact::_fieldNames[5] = {"FIRST NAME", "LAST NAME", "NICKNAME", "PHONE NUMBER", "DARKEST SECRET"};

Contact::Contact(void) : _first_name(EMPTY), _last_name(EMPTY), _nickname(EMPTY), _phone_number(EMPTY), _secret(EMPTY)
{
	return ;
}

Contact::~Contact()
{
	Contact::_nbContact -= 1;
	return ;
}

int	Contact::getNbContact(void)
{
	if (_nbContact >= 8)
		return _nbContact = 8;
	return _nbContact;
}

void Contact::showContact(int _index)
{
	std::string* fieldDatas[3] = {&_first_name, &_last_name, &_nickname};

	if (_index >= 1 && _index <= 8)
	{
		if (getNbContact() < _index)
		{
			std::cout << NOT_FILLED << std::endl;
			return;
		}
		std::cout << std::setfill(' ') << std::setw(10) << _index << PIPE;
		for (int i = 0; i < 3; i++)
			std::cout << std::setfill(' ') << std::setw(10) << *fieldDatas[i] << PIPE;
		std::cout << std::endl;
	}
	else
	{
		std::cout << WRONG << std::endl;
		return;
	}
}

bool	Contact::setContact(void)
{
		std::string	*fieldDatas[5] = {&_first_name, &_last_name, &_nickname, &_phone_number, &_secret};
		int			i = 0;

		while (i < 5)
		{
			std::cout << ENTER << _fieldNames[i] << D_DOT;
			if (!safeGetline(*fieldDatas[i]))
				return false;
			if (fieldDatas[i]->empty())
				std::cerr << EMPTY_FIELD << std::endl;
			else
			{
				if (fieldDatas[i]->length() >= 10)
				{
					fieldDatas[i]->resize(9);
					fieldDatas[i]->resize(10, '.');
				}
				i++;
			}
		}
		system(CLEAR);
		std::cout << SUCCESS << std::endl;
		_nbContact += 1;
		return true;
}
