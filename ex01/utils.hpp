/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:39:12 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/01 11:02:58 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	UTILS_HPP
# define	UTILS_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

#define	FILL			"Fill please ..."
#define	UNRECOGNIZED	"Unrecognized Option, Try Again !"
#define	CTRL_D			"Input ^D detected. Exiting..."
#define	DESTRUCTION		"PHONEBOOK WILL SELF-DESTRUCT IN 3 ... 2 ... 1 ..."
#define	WELCOME			"WELCOME IN THE PHONEBOOK"
#define	CHOOSE_OPTION	"CHOOSE YOUR OPTION : ADD / SEARCH / EXIT"
#define	NO_NUMBER		"Input not an number, try again"
#define	OUT_RANGE		"Input not between 1 and 8 or ALL, try again"
#define	WHICH			"Which contact do you want to see (1-8 or ALL) ? "

bool	safeGetline(std::string &str);

#endif