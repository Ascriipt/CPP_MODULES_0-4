/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:12:25 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/19 18:35:52 by red              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
}

HumanB::~HumanB() {
}

void	HumanB::setWeapon( Weapon& weap ) {
	this->_weapon = &weap;
}

void	HumanB::attack() {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}