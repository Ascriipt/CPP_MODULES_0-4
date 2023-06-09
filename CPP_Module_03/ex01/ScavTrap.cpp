/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:55:38 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/30 00:27:53 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap&	ScavTrap::operator=( const ScavTrap &neu ) {
	std::cout << "(ScavTrap) assignment operator called" << std::endl;
	_Name = neu._Name;
	_Hit_points = neu._Hit_points;
	_Energy_points = neu._Energy_points;
	_Attack_damage = neu._Attack_damage;
	return *this;
}

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "(ScavTrap) default Constructor called for : " << _Name << std::endl;
	_Hit_points = 100;
	_Energy_points = 50;
	_Attack_damage = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
	std::cout << "(ScavTrap) Constructor called for : " << _Name << std::endl;
	_Hit_points = 100;
	_Energy_points = 50;
	_Attack_damage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& neu ) : ClapTrap( neu ) {
	std::cout << "(ScavTrap) copy constructor called" << std::endl;
	(*this) = neu;
}

ScavTrap::~ScavTrap() {
	std::cout << "(ScavTrap) destructor called for : " << _Name << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "(ScavTrap) : " << this->_Name << " has entered Gate keeper mode" << std::endl;
}

void	ScavTrap::attack( const std::string& target ) {
	std::cout << "(ScavTrap) " << _Name << " attacks " << target << " dealing " << this->_Attack_damage << " damage(s)!" << std::endl;
}