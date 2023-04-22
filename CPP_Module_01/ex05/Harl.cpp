/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:15:02 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/23 01:42:55 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void	Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::error() {
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::debug() {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::complain( std::string level ) {
	t_fun		harl[] = {&Harl::info, &Harl::error, &Harl::debug, &Harl::warning};
	std::string	levels[] = {"INFO", "ERROR", "DEBUG", "WARNING"};
	size_t		i;

	i = 0;
	while (i <= 3 && levels[i] != level)
		i++;
	if (i <= 3)
		(this->*harl[i])();
}