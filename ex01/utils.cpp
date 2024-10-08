/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:05:03 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/08 20:17:17 by jgasparo         ###   ########.fr       */
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

int safeAtoi(const std::string& str)
{
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (!std::isdigit(str[i]))
		{
			std::cerr << NO_NUMBER << std::endl;
			return ERROR;
		}
	}
	int number = std::atoi(str.c_str());
	if (number < 1 || number > 8)
	{
		std::cerr << OUT_RANGE << std::endl;
		return ERROR;
	}
	return number;
}
