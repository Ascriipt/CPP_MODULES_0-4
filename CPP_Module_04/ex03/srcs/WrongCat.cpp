/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:01:32 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/04 18:37:44 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat& WrongCat::operator=( const WrongCat &old ) {
	std::cout << "WrongCat Assignment operator called for WrongCat." << std::endl;
	if (this != &old)
		this->_type = old._type;
	return *this;
}

WrongCat::WrongCat() : WrongAnimal("Cat") {
	std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::WrongCat( std::string type ) : WrongAnimal( "Cat" ) {
	std::cout << "WrongCat Constructor called for Cat ." << std::endl;
	(void)type;
	this->_type = "Cat";
}

WrongCat::WrongCat( const WrongCat &old ) {
	std::cout << "WrongCat Copy Constructor called." << std::endl;
	(*this) = old;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Default Destructor called for " << _type << '.' << std::endl;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Woof" << std::endl;
}