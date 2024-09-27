/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:45:03 by jgasparo          #+#    #+#             */
/*   Updated: 2024/09/27 17:45:26 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::setindex(int i)
{
	return PhoneBook::_Index = i - 1;
}

int	PhoneBook::_Index = -1;

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

// void	PhoneBook::getOption(std::string option)
// {

// }