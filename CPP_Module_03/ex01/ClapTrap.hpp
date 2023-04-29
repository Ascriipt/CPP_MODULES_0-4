/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:04:49 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/29 23:12:13 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
public :

	ClapTrap();
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap& neu );
	~ClapTrap();

	ClapTrap& operator=( const ClapTrap &neu );

	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void	attack( const std::string& target );

	int		getHitPoints( void ) const;

protected :

	std::string	_Name;
	size_t		_Hit_points;
	size_t		_Energy_points;
	size_t		_Attack_damage;

};

#endif