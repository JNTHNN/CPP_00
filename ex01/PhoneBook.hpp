/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:42:29 by jgasparo          #+#    #+#             */
/*   Updated: 2024/09/25 10:24:15 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class PhoneBook
{
public:
	PhoneBook(/* args */);
	~PhoneBook();
private:
	Contact m_contact[8];
	
};

PhoneBook::PhoneBook(/* args */)
{
	std::cout << "Ca construit" << std::endl;
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Ca detruit" << std::endl;
	return ;
}

#endif