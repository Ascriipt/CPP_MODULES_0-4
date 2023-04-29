/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:55:38 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/29 22:56:54 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap&	ScavTrap::operator=( const ScavTrap &neu ) {
	_Name = neu._Name;
	_Hit_points = neu._Hit_points;
	_Energy_points = neu._Energy_points;
	_Attack_damage = neu._Attack_damage;
	return *this;
}

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& neu ) : ClapTrap( neu ) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	(*this) = neu;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap : " << this->_Name << " has entered Gate keeper mode" << std::endl;
}