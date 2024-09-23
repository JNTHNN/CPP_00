/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:29:39 by jgasparo          #+#    #+#             */
/*   Updated: 2024/09/23 13:53:11 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"


int	main(void)
{
	system("clear");
	std::cout << "WELCOME IN THE PHONEBOOK" << std::endl;
	std::cout << "CHOOSE YOUR OPTION : ADD / SEARCH / EXIT" << std::endl;
	
	PhoneBook	exec;
	Contact		test;
	return 0;
}
