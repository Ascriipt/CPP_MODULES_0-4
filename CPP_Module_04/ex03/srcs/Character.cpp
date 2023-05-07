/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:51:09 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/07 21:51:19 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string name ) : _name(name) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "Character " << _name << " created" << std::endl;
}

Character::Character( Character const & src ) : _name(src._name) {
	*this = src;
	std::cout << "Character " << this->_name << " created" << std::endl;
}

Character& Character::operator=( Character const &old ) {
	if (this == &old)
		return *this;
	_name = old._name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = old._inventory[i];
	return *this;
}

Character::~Character() {
	std::cout << "Character " << _name << " destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
}

void	Character::equip( AMateria* materia ) {
	for (int i = 0; i < 4; i++)
		if (_inventory[i] == NULL) {
			_inventory[i] = materia;
			std::cout << _name << ": is now equipped with " << materia->getType() << std::endl;
			return;
		}
	std::cout << _name << ": can't equip " << materia->getType() << std::endl;
}

void	Character::unequip( int i ) {
	if (_inventory[i]) {
		delete _inventory[i];
		_inventory[i] = NULL;
		std::cout << _name << ": has unequipped a materia" << std::endl;
	}
	else
		std::cout << _name << ": can't unequip this materia" << std::endl;
}

void	Character::use( int i, ICharacter &target ) {
	if (_inventory[i]) {
		_inventory[i]->use(target);
		std::cout << _name << ": uses " << _inventory[i]->getType() << std::endl;
	}
	else
		std::cout << _name << " can't use whatever you tried to use" << std::endl;
}

std::string	const& Character::getName() const {
	return this->_name;
}
