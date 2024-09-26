/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:44:26 by jgasparo          #+#    #+#             */
/*   Updated: 2024/09/26 10:07:51 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
# define EMPTY ""

class Contact
{
	
	public:
		Contact();
		~Contact();

		void 		ShowContact();
		void		SetContact();
		
		static int	getNbContact(void);

	// a declarer ici mais a faire dans contact.cpp
	// faire des get pour acceder aux membres privés (en const pour la sécu)
	
	// faire des set pour modifier les membres privés 

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_secret;
		static int	_nbContact; // attribut non membres qui va permettre de compter le nb de contact si 8 -> reset
};

#endif