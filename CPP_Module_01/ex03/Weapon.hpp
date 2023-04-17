/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:51:31 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/17 16:51:33 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
public:

	Weapon();
	~Weapon();

	const std::string&	getType();

	void	setType( std::string type );

private:

	std::string	_type;

};

#endif