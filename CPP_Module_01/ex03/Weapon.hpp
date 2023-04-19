/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:51:31 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/19 18:45:53 by red              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
public:

	Weapon( std::string type );
	~Weapon();

	const std::string&	getType() const;

	void	setType( std::string type );

private:

	std::string	_type;

};

#endif