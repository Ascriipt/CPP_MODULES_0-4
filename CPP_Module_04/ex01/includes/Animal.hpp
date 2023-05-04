/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:31:44 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/04 19:35:50 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
{
protected:

std::string	_type;

public:

	Animal();
	Animal( std::string type );
	Animal( const Animal &old );
	virtual ~Animal();

	Animal&	operator=( const Animal &old );

	std::string	getType( void ) const;

	virtual void	makeSound( void ) const;

};

#endif