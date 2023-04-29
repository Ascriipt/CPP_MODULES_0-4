/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:57:04 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/29 22:46:39 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {
	ClapTrap player0;
	ClapTrap player1("Matteo");
	player1.attack("Meryem");
	player0.takeDamage(11);
	player1.takeDamage(11);
	player0.beRepaired(11);
	player1.beRepaired(10);
	return 0;
}