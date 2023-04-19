/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:10:53 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/19 18:23:06 by red              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:

	HumanB( std::string name );
	~HumanB();

	void	attack();
	void	setWeapon( Weapon& Weap );

private:

	Weapon*		_weapon;
	std::string	_name;

};

void	attack();

#endif