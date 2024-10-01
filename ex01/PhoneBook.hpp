/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:42:29 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/01 09:05:25 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		Contact 	Contacts[8];

		std::string	option;
		static int			_index;

		static int	setindex(int i);
		void		welcome() const;
		void		choose_option() const;
		bool		check_index(std::string option);

		
	private:
		
};

#endif