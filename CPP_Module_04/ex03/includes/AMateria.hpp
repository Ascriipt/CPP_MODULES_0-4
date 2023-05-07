/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:48:49 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/07 21:47:18 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
protected:

	std::string	_type;

public:

	AMateria();
	AMateria( std::string const & type );
	AMateria( AMateria const &old );
	virtual ~AMateria();

	std::string const	&getType() const;

	virtual AMateria*	clone() const = 0;

	virtual void		use( ICharacter& target );

};

#endif