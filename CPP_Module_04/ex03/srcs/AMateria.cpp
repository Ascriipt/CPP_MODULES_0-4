/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:45:53 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/07 21:50:17 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("") {
}

AMateria::AMateria( std::string const &type )  : _type( type ) {
    std::cout << "AMateria " << _type << " created" << std::endl;
}

AMateria::AMateria( AMateria const &old ) {
	*this = old;
}

AMateria::~AMateria( void ) {
	std::cout << "AMateria " << _type << " destroyed" << std::endl;
}

std::string const & AMateria::getType() const {
	return this->_type;
}

AMateria* AMateria::clone() const {
	return (AMateria*)this;
}

void	AMateria::use( ICharacter &target ) {
	std::cout << "AMateria: " << _type << " used on " << target.getName() << std::endl;
}