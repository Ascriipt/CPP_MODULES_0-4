/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:58:42 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/07 19:20:40 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
class Cat : public Animal
{
private:

	Brain		*_brain;

public:

	Cat();
	Cat( std::string type );
	Cat( const Cat &old );
	~Cat();

	Cat&	operator=( const Cat &old );

	void		makeSound( void ) const;
	void		showBrain( void ) const;
	void		setIdea( size_t i, std::string idea );

};

#endif