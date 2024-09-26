/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:42:29 by jgasparo          #+#    #+#             */
/*   Updated: 2024/09/26 12:04:40 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
public:
	// static Contact Contact[8]; trouver le moyen de l'implementer ici
	PhoneBook(/* args */);
	~PhoneBook();

	static int	setindex(int i);
	
private:
	static int	_Index;
	
};

#endif