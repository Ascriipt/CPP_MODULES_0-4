/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:53:02 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/07 21:48:42 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:

	Cure();
	~Cure();

	Cure( Cure const & );
	Cure& operator=( Cure const & );
	
	virtual AMateria*	clone() const;

	virtual void		use( ICharacter &target );

};

#endif