/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCatgCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:58:42 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/04 18:50:32 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:

	WrongCat();
	WrongCat( std::string type );
	WrongCat( const WrongCat &old );
	~WrongCat();

	WrongCat&	operator=( const WrongCat &old );

	void		makeSound( void ) const;

};

#endif