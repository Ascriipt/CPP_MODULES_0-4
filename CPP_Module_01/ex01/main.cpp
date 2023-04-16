/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:27:26 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/16 19:22:41 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 12

int	main(void)
{
	Zombie* Horde = zombieHorde(N, "daniel");
	for (size_t i = 0; i < N; i++)
		Horde[i].announce();
	delete [] Horde;
}