/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:55:10 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/02 21:02:10 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public :

	DiamondTrap();
	DiamondTrap( std::string name );
	DiamondTrap( const DiamondTrap& neu );
	~DiamondTrap();

	DiamondTrap&	operator=( const DiamondTrap &neu );

	void	whoAmI();
	void	attack( const std::string& target );

private :

	std::string	_Name;

};

#endif