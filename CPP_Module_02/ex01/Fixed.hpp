/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:20:57 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/27 20:03:05 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
public:

    Fixed();
    Fixed( const int nb );
    Fixed( const float nb );
    Fixed( const Fixed &neu );
    Fixed& operator=( const Fixed &neu );
    ~Fixed();

    void    setRawBits( int const raw );
    int     getRawBits( void ) const;

	float	toFloat( void ) const;
	int		toInt( void ) const;

private:

    int                 _fixedPointInteger;
    static const int    _fractionalBits = 8;

};

std::ostream& operator<<( std::ostream & o, Fixed const & i );

#endif  // FIXED_HPP