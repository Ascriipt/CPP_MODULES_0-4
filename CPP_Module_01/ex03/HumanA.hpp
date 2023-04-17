/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:55:28 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/17 17:00:41 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:

	HumanA( std::string name, Weapon& weap );
	~HumanA();

	void	attack();

private:

	Weapon&		_weapon;
	std::string	_name;

};

#endif