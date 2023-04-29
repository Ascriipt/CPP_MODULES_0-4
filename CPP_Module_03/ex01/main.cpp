/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:57:04 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/29 22:56:21 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main() {
	ScavTrap player("Matteo");
	ScavTrap other(player);
	player.guardGate();
	other.guardGate();
	return 0;
}