/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:44:26 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/10 14:57:59 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "utils.hpp"

class Contact
{
	
	public:
		Contact();
		~Contact();

		void 						showContact(int _index);
		bool						setContact();
		
		static int					getNbContact(void);

	private:
		std::string					_first_name;
		std::string					_last_name;
		std::string					_nickname;
		std::string					_phone_number;
		std::string					_secret;
		static int					_nbContact;
		static const std::string	_fieldNames[5];
};

#endif