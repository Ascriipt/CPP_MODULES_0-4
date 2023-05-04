/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:58:42 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/04 19:39:37 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
public:

	Cat();
	Cat( std::string type );
	Cat( const Cat &old );
	~Cat();

	Cat&	operator=( const Cat &old );

	void		makeSound( void ) const;

	void		setBrain( Brain *brain );

private:

	Brain *_brain;

};

#endif