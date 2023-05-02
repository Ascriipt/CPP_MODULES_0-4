/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:55:10 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/02 21:10:20 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public :

	FragTrap();
	FragTrap( std::string name );
	FragTrap( const FragTrap& neu );
	~FragTrap();

	FragTrap&	operator=( const FragTrap &neu );

	void		highFivesGuys(void);
	void		attack( const std::string& target );
};

#endif