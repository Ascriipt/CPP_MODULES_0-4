/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:55:28 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/19 18:35:22 by red              ###   ########.fr       */
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

	std::string	_name;
	Weapon&		_weapon;

};

void	attack();

#endif