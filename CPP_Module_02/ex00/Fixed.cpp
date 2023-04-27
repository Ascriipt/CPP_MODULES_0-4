/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:20:44 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/27 17:57:32 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointInteger(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &neu ) {
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(neu.getRawBits());
}

Fixed& Fixed::operator=( const Fixed &neu ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &neu)
        this->_fixedPointInteger = neu.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointInteger;
}

void    Fixed::setRawBits( int const raw ) {
    this->_fixedPointInteger = raw;
}