/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:45:03 by jgasparo          #+#    #+#             */
/*   Updated: 2024/09/27 11:10:04 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::setindex(int i)
{
	return PhoneBook::_Index = i;
}

int	PhoneBook::_Index = -1;

PhoneBook::PhoneBook()
{
	std::cout << "Ca construit le phonebook" << std::endl;
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Ca detruit le phonebook" << std::endl;
	return ;
}
