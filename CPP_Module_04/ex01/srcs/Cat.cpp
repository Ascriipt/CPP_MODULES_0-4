/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:01:32 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/07 19:22:13 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat& Cat::operator=( const Cat &old ) {
	std::cout << "Cat Assignment operator called for Cat." << std::endl;
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

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat Default Constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
	if (!_brain) {
		std::cout << "Brain allocation failed." << std::endl;
		exit (1);
	}
}

Cat::Cat( std::string type ) : Animal("Cat") {
	std::cout << "Cat Constructor called for Cat." << std::endl;
	(void)type;
	_type = "Cat";
	_brain = new Brain();
	if (!_brain) {
		std::cout << "Brain allocation failed." << std::endl;
		exit (1);
	}
}

Cat::Cat( const Cat &old ) {
	std::cout << "Cat Copy Constructor called." << std::endl;
	(*this) = old;
}

Cat::~Cat() {
	std::cout << "Cat Default Destructor called for " << _type << '.' << std::endl;
	delete _brain;
}

void	Cat::makeSound( void ) const {
	if (_type != "Cat") {
		std::cout << "Weird I seem to look like a cat yet I feel a " << _type << std::endl;
		return ;
	}
	std::cout << "Meowwwwwww" << std::endl;
}

void	Cat::showBrain( void ) const {
	for (size_t i = 0; i < 100 ; i++)
		std::cout << _brain->getIdea(i) << std::endl;
}

void	Cat::setIdea( size_t i, std::string idea ) {
	if ( i < 100 )
		_brain->setIdea(i, idea);
}