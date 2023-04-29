/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:15:06 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/28 21:15:41 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*****************************Constructor, *********************************/

ClapTrap::ClapTrap( std::string name ) : _Name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0) {
	std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap &neu ) {
	_Name = neu._Name;
	_Hit_points = neu._Hit_points;
	_Energy_points = neu._Energy_points;
	_Attack_damage = neu._Attack_damage;
	return *this;
}

ClapTrap::ClapTrap( const ClapTrap& neu ) {
	std::cout << "Copy Constructor Called" << std::endl;
	(*this) = neu;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Default Destructor Called" << std::endl;
}

/*********************************************************************************/

void	ClapTrap::takeDamage( unsigned int amount ) {
	std::cout << "OOF ! " << this->_Name << " is dealt " << amount << " damage(s)!" << std::endl;
	if (this->_Hit_points <= amount) {
		this->_Hit_points = 0;
		std::cout << "Sadly, " << this->_Name << " has passed away." << std::endl;
	}
	else
		this->_Hit_points -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	std::cout << "Woah ! " << this->_Name << " is being repaired for " << amount << " Hit points ! How Lucky !" << std::endl;
	this->_Hit_points += amount;
}

void	ClapTrap::attack( const std::string& target ) {
	std::cout << "ClapTrap " << _Name << " attacks " << target << " dealing " << this->_Attack_damage << " damage(s)!" << std::endl;
}