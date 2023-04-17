/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:04:56 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/17 17:12:08 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weap ) : _name(name), _weapon(weap) {
}

HumanA::~HumanA()
{
	std::cout << this->_name << " : HumanA destroyed" << std::endl;
}