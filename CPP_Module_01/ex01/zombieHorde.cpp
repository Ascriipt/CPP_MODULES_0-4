/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:44:29 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/16 19:21:03 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::set_name( std::string name )
{
	this->_name = name;	
}

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*Horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		Horde[i].set_name(name);
	return (Horde);
}