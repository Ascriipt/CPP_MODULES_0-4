/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 01:44:27 by red               #+#    #+#             */
/*   Updated: 2023/04/19 18:45:42 by red              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {
	return ;
}

Weapon::~Weapon() {
}

const std::string&	Weapon::getType() const {
	return (this->_type);
}

void	Weapon::setType( std::string type ) {
	this->_type = type;
}