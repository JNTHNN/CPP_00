/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:39:12 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/02 11:17:34 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	UTILS_HPP
# define	UTILS_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

#define EMPTY 			""
#define	PIPE			"|"
#define	D_DOT			" : "
#define	SUCCESS			"Contact successfully added"
#define	CLEAR			"clear"
#define	ADD				"ADD"
#define	SEARCH			"SEARCH"
#define	EXIT			"EXIT"
#define	ALL				"ALL"
#define	ENTER			"Enter "
#define	FILL			"Fill please ..."
#define	UNRECOGNIZED	"Unrecognized Option, Try Again !"
#define	CTRL_D			"Input ^D detected. Exiting..."
#define	DESTRUCTION		"PHONEBOOK WILL SELF-DESTRUCT IN 3 ... 2 ... 1 ..."
#define	WELCOME			"WELCOME IN THE PHONEBOOK"
#define	CHOOSE_OPTION	"CHOOSE YOUR OPTION : ADD / SEARCH / EXIT"
#define	NO_NUMBER		"Input not an number, try again"
#define	OUT_RANGE		"Input not between 1 and 8 or ALL, try again"
#define	WHICH			"Which contact do you want to see (1-8 or ALL) ? "
#define	NOT_FILLED		"Contact not filled"
#define	WRONG			"Wrong index"
#define	EMPTY_FIELD		"empty fields not accepted, try again"
bool	safeGetline(std::string &str);

#endif