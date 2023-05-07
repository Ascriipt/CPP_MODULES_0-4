/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:53:11 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/07 21:52:27 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	// std::cout << "Ice materia created" << std::endl;
}

Ice::Ice( Ice const & src ) : AMateria("ice") {
	*this = src;
	// std::cout << "Ice materia copied" << std::endl;
}

Ice&	Ice::operator=( const Ice &old ) {
	if (this != &old)
		this->_type = old._type;
	return *this;
}

Ice::~Ice() {
	// std::cout << "Ice materia destroyed" << std::endl;
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use( ICharacter& target ) {
	std::cout <<"* shoots an ice bolt at " << target.getName()<< " *" << std::endl;
}