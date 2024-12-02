/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:39:12 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/02 22:24:19 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	UTILS_HPP
# define	UTILS_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

#define	ERROR			-1
#define EMPTY 			""
#define	PIPE			"|"
#define	D_DOT			" : "
#define	SUCCESS			"CONTACT SUCCESSFULLY ADDED"
#define	CLEAR			"clear"
#define	ADD				"ADD"
#define	SEARCH			"SEARCH"
#define	EXIT			"EXIT"
#define	ALL				"ALL"
#define	ENTER			"ENTER "
#define	FILL			"FILL PLEASE ..."
#define	UNRECOGNIZED	"UNRECOGNIZED OPTION, TRY AGAIN !"
#define	CTRL_D			"INPUT ^D DETECTED. EXITING..."
#define	DESTRUCTION		"PHONEBOOK WILL SELF-DESTRUCT IN 3 ... 2 ... 1 ..."
#define	WELCOME			"WELCOME IN THE PHONEBOOK"
#define	CHOOSE_OPTION	"CHOOSE YOUR OPTION : ADD / SEARCH / EXIT"
#define	NO_NUMBER		"INPUT NOT AN NUMBER, TRY AGAIN"
#define	OUT_RANGE		"INPUT NOT BETWEEN 1 AND 8 OR ALL, TRY AGAIN"
#define	WHICH			"WHICH CONTACT DO YOU WANT TO SEE (1-8) ? "
#define	NOT_FILLED		"CONTACT NOT FILLED"
#define	WRONG			"WRONG INDEX"
#define	EMPTY_FIELD		"EMPTY FIELDS NOT ACCEPTED, TRY AGAIN"
#define	NO_CONTACT		"NO CONTACT FOR THE MOMENT"

bool	safeGetline(std::string &str);
int		safeAtoi(const std::string& str);

#endif

