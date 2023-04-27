/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:20:57 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/27 17:57:36 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:

    Fixed();
    Fixed( const Fixed &neu );
    Fixed& operator=( const Fixed &neu );
    ~Fixed();

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

private:

    int                 _fixedPointInteger;
    static const int    _fractionalBits = 8;

};

#endif  // FIXED_HPP