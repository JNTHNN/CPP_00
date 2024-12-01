/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:42:29 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/01 21:17:52 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "utils.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void		welcome() const;
		bool		chooseOption() const;
		bool		getOption();
		bool		setOption();
		bool		getExit() const;
		void		display(void) const;

		
	private:
		Contact 	Contacts[8];

		std::string	_option;
		static int	_index;
		static bool	_exit;
};

#endif