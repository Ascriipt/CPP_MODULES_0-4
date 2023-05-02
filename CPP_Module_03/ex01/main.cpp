/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:57:04 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/02 22:15:39 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	//{
	//	std::cout << "\033[32mClapTrap\033[0m" << std::endl;
	//	std::cout << "\033[35mConstructing\033[0m" << std::endl;
	//	ClapTrap a;
	//	ClapTrap b("Matteo");

	//	std::cout << "\033[35mTests\033[0m" << std::endl;
	//	a.attack("some other robot");
	//	a.takeDamage(10);
	//	a.takeDamage(10);
	//	a.beRepaired(5);
	//	a.attack("some other other robot");
	//	b.beRepaired(3);
	//	for (int i = 0; i < 12; i++)
	//		b.attack("The air");
	//	b.beRepaired(3);
	//	std::cout << "\033[35mDestructing\033[0m" << std::endl;
	//}
	{
		std::cout << "\033[32mClapTrap\033[0m" << std::endl;
		std::cout << "\033[35mConstructing\033[0m" << std::endl;
		ScavTrap a;
		ScavTrap b("Savage");

		std::cout << "\033[35mTests\033[0m" << std::endl;
		a.attack("CloneTrap");
		a.beRepaired(22);
		a.takeDamage(21);
		a.beRepaired(22);
		a.guardGate();
		a.guardGate();
		b.attack("The air");
		b.takeDamage(101);
		b.takeDamage(15);
		b.attack("The air");
		std::cout << "\033[35mDestructing\033[0m" << std::endl;
	}
}