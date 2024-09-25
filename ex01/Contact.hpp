/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:44:26 by jgasparo          #+#    #+#             */
/*   Updated: 2024/09/25 12:01:43 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;
	
	public:
		Contact();
		void ShowContact();
		void	SetContact();
	// a declarer ici mais a faire dans contact.cpp
	// faire des get pour acceder aux membres privés (en const pour la sécu)
	
	// faire des set pour modifier les membres privés 
};


// Contact::~Contact(void)
// {
// 	std::cout << "Suppression du contact";
// 	return ;
// }
#endif