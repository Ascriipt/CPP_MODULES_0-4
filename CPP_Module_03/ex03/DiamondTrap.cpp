/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:55:38 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/30 00:35:52 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &neu) {
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	this->_Name = neu._Name;
	this->ClapTrap::_Name = this->_Name + "_clap_name";
	this->_Hit_points = neu._Hit_points;
	this->_Energy_points = neu._Energy_points;
	this->_Attack_damage = neu._Attack_damage;
	return *this;
}

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {
	std::cout << "{DiamondTrap} default Constructor called for : default" << _Name << std::endl;
	this->_Name = "default";
	this->ClapTrap::_Name = this->_Name + "_clap_name";
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
}

DiamondTrap::DiamondTrap( std::string name ) : ScavTrap( name ), FragTrap( name ) {
	std::cout << "{DiamondTrap} Constructor called for : " << _Name << std::endl;
	this->_Name = name;
	this->ClapTrap::_Name = name + "_clap_name";
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
}

DiamondTrap::DiamondTrap( const DiamondTrap& neu ) {
	std::cout << "{DiamondTrap} copy constructor called" << std::endl;
	(*this) = neu;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "{DiamondTrap} destructor called for : " << _Name << std::endl;
}

void	DiamondTrap::attack( const std::string& target ) {
	ScavTrap::attack( target );
}

void	DiamondTrap::whoAmI() {
	std::cout << "I'm a DiamondTrap named " << _Name << " And my daddy ClapTrap is " << ClapTrap::_Name << std::endl;
}