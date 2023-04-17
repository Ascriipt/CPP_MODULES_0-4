/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:10:53 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/17 17:18:46 by maparigi         ###   ########.fr       */
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

private:

	Weapon*		_weapon;
	std::string	_name;

};

#endif