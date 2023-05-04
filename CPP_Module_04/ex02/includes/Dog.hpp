/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:26:41 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/04 18:33:43 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:

	Dog();
	Dog( std::string type );
	Dog( const Dog &old );
	~Dog();

	Dog&	operator=( const Dog &old );

	void		makeSound( void ) const;

};

#endif