/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:20:44 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/28 15:53:07 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPointInteger(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int nb ) : _fixedPointInteger( nb << _fractionalBits ) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float nb) : _fixedPointInteger(roundf(nb * (1 << _fractionalBits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &neu ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = neu;
}

Fixed& Fixed::operator=( const Fixed &neu ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &neu)
        this->_fixedPointInteger = neu.getRawBits();
    return *this;
}

std::ostream& operator<<( std::ostream& os, Fixed const& to_print ) {
    os << to_print.toFloat();
    return os;
}

float Fixed::toFloat( void ) const {
    return static_cast<float>( this->getRawBits() ) / ( 1 << _fractionalBits );
}

int     Fixed::toInt( void ) const {
    return _fixedPointInteger >> _fractionalBits;
}

int Fixed::getRawBits( void ) const {
    return this->_fixedPointInteger;
}

void    Fixed::setRawBits( int const raw ) {
    this->_fixedPointInteger = raw;
}