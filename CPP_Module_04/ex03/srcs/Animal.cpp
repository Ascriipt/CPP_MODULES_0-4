/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:29:57 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/04 18:33:11 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal&	Animal::operator=( const Animal &old ) {
	std::cout << "Animal Assignment operator called for " << _type << '.' << std::endl;
	if (this != &old)
		_type = old._type;
	return *this;
}

Animal::Animal() : _type("Snake") {
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal( std::string type ) : _type( type ) {
	std::cout << "Animal Constructor Called for " << _type << '.' << std::endl;
}

Animal::Animal( const Animal &old ) {
	std::cout << "Animal Copy Constructor called." << std::endl;
	(*this) = old;
}

Animal::~Animal() {
	std::cout << "Animal Default Destructor called for " << _type << '.' << std::endl;
}

std::string	Animal::getType( void ) const {
	return _type;
}

void	Animal::makeSound( void ) const {
	std::cout << "Animal Sound" << std::endl;
}