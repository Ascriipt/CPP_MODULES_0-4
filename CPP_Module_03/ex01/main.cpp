/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:57:04 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/30 00:29:56 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap test;
	ScavTrap player("Matteo");
	ScavTrap other(player);
	std::cout << test.getHitPoints() << " " << player.getHitPoints() << " " << other.getHitPoints() << std::endl;
	player.guardGate();
	other.guardGate();
	player.attack( "Meryem" );
	player.takeDamage(101);
	player.beRepaired(10);
	std::cout << test.getHitPoints() << " " << player.getHitPoints() << " " << other.getHitPoints() << std::endl;
	return 0;
}
//{
//    ScavTrap ash( "Ash" );
//    ScavTrap ash2( ash );

//    ash.attack( "the air" );
//    ash.takeDamage( 10 );
//    ash.beRepaired( 10 );
//    ash.guardGate();

//    return 1;
//}