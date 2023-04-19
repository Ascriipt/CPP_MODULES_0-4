/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:04:56 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/19 01:50:34 by red              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weap ) : _name(name), _weapon(weap) {
}

HumanA::~HumanA() {
	//std::cout << this->_name << " : HumanA destroyed" << std::endl;
}

void	HumanA::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}