/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:29:39 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/04 15:55:43 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	
	PhoneBook.welcome();	
	while (!PhoneBook.getExit())
	{
		if (!PhoneBook.chooseOption() || !PhoneBook.getOption())
			break;
		if (!PhoneBook.setOption())
			continue;
	}
	return 0;
}
