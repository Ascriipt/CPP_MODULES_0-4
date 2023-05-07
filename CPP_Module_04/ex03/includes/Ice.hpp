/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:53:18 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/07 21:31:25 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:

	Ice();
	~Ice();

	Ice( Ice const & );
	Ice& operator=( Ice const & );

	virtual AMateria*	clone() const;

	virtual void		use(ICharacter& target);

};

#endif