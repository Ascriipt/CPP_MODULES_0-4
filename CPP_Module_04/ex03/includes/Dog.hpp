/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:26:41 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/07 19:20:09 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:

	Brain		*_brain;

public:

	Dog();
	Dog( std::string type );
	Dog( const Dog &old );
	~Dog();

	Dog&	operator=( const Dog &old );

	void		makeSound( void ) const;
	void		showBrain( void ) const;

	void		setIdea( size_t i, std::string idea );

};

#endif