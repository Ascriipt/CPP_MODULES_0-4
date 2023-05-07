/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:29:57 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/04 18:33:11 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal &old ) {
	std::cout << "WrongAnimal Assignment operator called for " << _type << '.' << std::endl;
	if (this != &old)
		_type = old._type;
	return *this;
}

WrongAnimal::WrongAnimal() : _type("Snake") {
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type( type ) {
	std::cout << "WrongAnimal Constructor Called for " << _type << '.' << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &old ) {
	std::cout << "WrongAnimal Copy Constructor called." << std::endl;
	(*this) = old;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Default Destructor called for " << _type << '.' << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return _type;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal Sound" << std::endl;
}