/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:52:53 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/07 21:51:47 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" ) {
	// std::cout << "Cure materia created" << std::endl;
}

Cure::Cure( Cure const &old ) : AMateria( "cure" ) {
	*this = old;
	// std::cout << "Cure materia copied" << std::endl;
}

Cure&	Cure::operator=( const Cure& old ) {
	if (this != &old)
		this->_type = old._type;
	return *this;
}

Cure::~Cure() {
	// std::cout << "Cure materia destroyed" << std::endl;
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}