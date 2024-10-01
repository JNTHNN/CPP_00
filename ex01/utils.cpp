/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:05:03 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/01 11:46:38 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"


bool	safeGetline(std::string &str)
{
	if (!std::getline(std::cin, str))
	{
		if (std::cin.eof())
		{
			std::cerr << CTRL_D << std::endl;
			std::cin.clear();
			return false;
		}
	}
	return true;
}