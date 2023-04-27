/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:20:44 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/27 21:35:05 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPointInteger(0) {
}

Fixed::Fixed( const int nb ) : _fixedPointInteger( nb << _fractionalBits ) {
}

Fixed::Fixed( const float nb) : _fixedPointInteger(std::roundf(nb * (1 << _fractionalBits))) {
}

Fixed::~Fixed() {
}

Fixed::Fixed( const Fixed &neu ) {
    *this = neu;
}

Fixed& Fixed::operator=( const Fixed &neu ) {
    if (this != &neu)
        this->_fixedPointInteger = neu.getRawBits();
    return *this;
}

Fixed& Fixed::operator++( void ) {
	++this->_fixedPointInteger;
	return *this;
}

Fixed Fixed::operator++( int ) {
	Fixed	temp(*this);
	temp._fixedPointInteger = this->_fixedPointInteger++;
	return temp;
}

Fixed& Fixed::operator--( void ) {
	--this->_fixedPointInteger;
	return *this;
}

Fixed Fixed::operator--( int ) {
	Fixed	temp(*this);
	temp._fixedPointInteger = this->_fixedPointInteger--;
	return temp;
}

Fixed Fixed::operator+( const Fixed &neu ) const {
	return Fixed(this->toFloat() + neu.toFloat());
}

Fixed Fixed::operator-( const Fixed &neu ) const {
	return Fixed(this->toFloat() - neu.toFloat());
}

Fixed Fixed::operator*( const Fixed &neu ) const {
	return Fixed(this->toFloat() * neu.toFloat());
}

Fixed Fixed::operator/( const Fixed &neu ) const {
	return Fixed(this->toFloat() / neu.toFloat());
}

bool Fixed::operator>( const Fixed &neu ) const {
    return this->getRawBits() > neu.getRawBits();
}

bool Fixed::operator<( const Fixed &neu ) const {
	return this->getRawBits() < neu.getRawBits();
}

bool Fixed::operator>=( const Fixed &neu ) const {
	return this->getRawBits() >= neu.getRawBits();
}

bool Fixed::operator<=( const Fixed &neu ) const {
	return this->getRawBits() <= neu.getRawBits();
}

bool Fixed::operator==( const Fixed &neu ) const {
	return this->getRawBits() == neu.getRawBits();
}

bool Fixed::operator!=( const Fixed &neu ) const {
	return this->getRawBits() != neu.getRawBits();
}

std::ostream& operator<<( std::ostream& os, Fixed const& to_print ) {
    os << to_print.toFloat();
    return os;
}

Fixed& Fixed::min( Fixed &x, Fixed &y ) {
    if ( x.getRawBits() < y.getRawBits() )
        return x;
    return y;
}

Fixed& Fixed::max( Fixed &x, Fixed &y ) {
    if ( x.getRawBits() > y.getRawBits() )
        return x;
    return y;
}

const Fixed& Fixed::min( const Fixed &x, const Fixed &y ) {
    if ( x.getRawBits() < y.getRawBits() )
        return x;
    return y;
}

const Fixed& Fixed::max( const Fixed &x, const Fixed &y ) {
    if ( x.getRawBits() > y.getRawBits() )
        return x;
    return y;
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