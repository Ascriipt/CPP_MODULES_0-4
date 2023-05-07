/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:52:45 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/07 21:48:24 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{

private:

	std::string	_name;
	AMateria	*_inventory[4];

public:

	Character( std::string name );
	Character( Character const &old );
	~Character();

	Character&			operator=( Character const &old );

	std::string const	&getName() const;

	void				equip( AMateria* materia );
	void				unequip( int i );
	void				use( int i, ICharacter &target );

};

#endif