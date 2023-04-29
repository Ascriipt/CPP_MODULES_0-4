/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:57:04 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/29 23:15:04 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main() {
	ClapTrap test;
	ScavTrap player("Matteo");
	ScavTrap other(player);
	std::cout << test.getHitPoints() << " " << player.getHitPoints() << " " << other.getHitPoints() << std::endl;
	player.guardGate();
	other.guardGate();
	player.takeDamage(101);
	player.beRepaired(10);
	std::cout << test.getHitPoints() << " " << player.getHitPoints() << " " << other.getHitPoints() << std::endl;
	return 0;
}