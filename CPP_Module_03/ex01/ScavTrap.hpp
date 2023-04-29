/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:55:10 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/30 00:29:08 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public :

	ScavTrap();
	ScavTrap( std::string name );
	ScavTrap( const ScavTrap& neu );
	~ScavTrap();

	ScavTrap&	operator=( const ScavTrap &neu );

	void	guardGate();
	void	attack( const std::string& target );
};

#endif