/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:55:38 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/30 00:34:46 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap&	FragTrap::operator=( const FragTrap &neu ) {
	std::cout << "<FragTrap> assignment operator called" << std::endl;
	_Name = neu._Name;
	_Hit_points = neu._Hit_points;
	_Energy_points = neu._Energy_points;
	_Attack_damage = neu._Attack_damage;
	return *this;
}

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "<FragTrap> default Constructor called for : " << _Name << std::endl;
	_Hit_points = 100;
	_Energy_points = 100;
	_Attack_damage = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {
	std::cout << "<FragTrap> Constructor called for : " << _Name << std::endl;
	_Hit_points = 100;
	_Energy_points = 100;
	_Attack_damage = 30;
}

FragTrap::FragTrap( const FragTrap& neu ) : ClapTrap( neu ) {
	std::cout << "<FragTrap> copy constructor called" << std::endl;
	(*this) = neu;
}

FragTrap::~FragTrap() {
	std::cout << "<FragTrap> destructor called for : " << _Name << std::endl;
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "Give me a High Five ! ✋" << std::endl;
}

void	FragTrap::attack( const std::string& target ) {
	std::cout << "<FragTrap> " << _Name << " attacks " << target << " dealing " << this->_Attack_damage << " damage(s)!" << std::endl;
}