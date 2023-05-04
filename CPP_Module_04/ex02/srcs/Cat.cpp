/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:01:32 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/04 18:37:44 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat& Cat::operator=( const Cat &old ) {
	std::cout << "Cat Assignment operator called for Cat." << std::endl;
	if (this != &old)
		this->_type = old._type;
	return *this;
}

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat( std::string type ) : Animal( type ) {
	std::cout << "Cat Constructor called for " << _type << '.' << std::endl;
}

Cat::Cat( const Cat &old ) {
	std::cout << "Cat Copy Constructor called." << std::endl;
	(*this) = old;
}

Cat::~Cat() {
	std::cout << "Cat Default Destructor called for " << _type << '.' << std::endl;
}

void	Cat::makeSound( void ) const {
	if (_type != "Cat") {
		std::cout << "Weird I seem to look like a cat yet I feel a " << _type << std::endl;
		return ;
	}
	std::cout << "Meowwwwwww" << std::endl;
}