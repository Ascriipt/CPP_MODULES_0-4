/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:57:04 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/30 00:37:22 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ScavTrap player("Matteo");
	FragTrap tset("Nat");
	std::cout << tset.getHitPoints() << " " << player.getHitPoints() << " " << std::endl;
	player.guardGate();
	tset.highFivesGuys();
	player.takeDamage(101);
	tset.takeDamage(101);
	player.beRepaired(10);
	tset.beRepaired(10);
	player.attack("Dnai");
	tset.attack("Dnai");
	std::cout << tset.getHitPoints() << " " << player.getHitPoints() << " " << std::endl;
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