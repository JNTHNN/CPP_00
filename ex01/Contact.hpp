/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:44:26 by jgasparo          #+#    #+#             */
/*   Updated: 2024/09/23 15:35:32 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	
	public:
		void set_values(char , char , char , char , char , char);
	private:
		char	first_name, last_name, nickname, phone_number, secret;
};

void	Contact::set_values(char fn, char ln, char nn, char pn, char s)
{
}

Contact::Contact(void)
{
	std::cout << "Initialisation du contact" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Suppression du contact";
	return ;
}
#endif