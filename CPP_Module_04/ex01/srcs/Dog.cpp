/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:24:32 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/07 19:19:05 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog& Dog::operator=( const Dog &old ) {
	std::cout << "Dog Assignment operator called for Dog." << std::endl;
	if (this == &old)
		return *this;
	_type = old._type;
	_brain = new Brain();
	if (!_brain) {
		std::cout << "Brain allocation failed." << std::endl;
		exit (1);
	}
	*_brain = *old._brain;
	return *this;
}

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog Default Constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
	if (!_brain) {
		std::cout << "Brain allocation failed." << std::endl;
		exit (1);
	}
}

Dog::Dog( std::string type ) : Animal("Dog") {
	std::cout << "Dog Constructor called for Dog." << std::endl;
	(void)type;
	_type = "Dog";
	_brain = new Brain();
	if (!_brain) {
		std::cout << "Brain allocation failed." << std::endl;
		exit (1);
	}
}

Dog::Dog( const Dog &old ) {
	std::cout << "Dog Copy Constructor called." << std::endl;
	(*this) = old;
}

Dog::~Dog() {
	std::cout << "Dog Default Destructor called for " << _type << '.' << std::endl;
	delete _brain;
}

void	Dog::makeSound( void ) const {
	if (_type != "Dog") {
		std::cout << "Weird I seem to look like a Dog yet I feel a " << _type << std::endl;
		return ;
	}
	std::cout << "Woof" << std::endl;
}

void	Dog::showBrain( void ) const {
	for (size_t i = 0; i < 100 ; i++)
		std::cout << _brain->getIdea(i) << std::endl;
}

void	Dog::setIdea( size_t i, std::string idea ) {
	if ( i < 100 )
		_brain->setIdea(i, idea);
}