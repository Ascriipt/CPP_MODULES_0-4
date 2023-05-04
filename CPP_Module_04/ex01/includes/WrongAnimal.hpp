/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:31:44 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/04 18:34:00 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
protected:

std::string	_type;

public:

	WrongAnimal();
	WrongAnimal( std::string type );
	WrongAnimal( const WrongAnimal &old );
	virtual ~WrongAnimal();

	WrongAnimal&	operator=( const WrongAnimal &old );

	std::string	getType( void ) const;

	virtual void	makeSound( void ) const;

};

#endif