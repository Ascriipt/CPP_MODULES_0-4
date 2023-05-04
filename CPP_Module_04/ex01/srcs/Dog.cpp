/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:24:32 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/04 19:43:33 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog& Dog::operator=( const Dog &old ) {
	std::cout << "Dog Assignment operator called for Dog." << std::endl;
	if (this != &old) {
		this->_type = old._type;
		setBrain( new Brain );
	}
	return *this;
}

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog Default Constructor called" << std::endl;
	setBrain( new Brain() );
}

Dog::Dog( std::string type ) : Animal( type ) {
	std::cout << "Dog Constructor called for " << _type << '.' << std::endl;
	setBrain( new Brain() );
}

Dog::Dog( const Dog &old ) {
	std::cout << "Dog Copy Constructor called." << std::endl;
	(*this) = old;
}

Dog::~Dog() {
	std::cout << "Dog Default Destructor called for " << _type << '.' << std::endl;
	delete _brain;
}

void	Dog::setBrain( Brain *brain ) {
	_brain = brain;
}

void	Dog::makeSound( void ) const {
	if (_type != "Dog") {
		std::cout << "Weird I seem to look like a Dog yet I feel a " << _type << std::endl;
		return ;
	}
	std::cout << "Woof" << std::endl;
}