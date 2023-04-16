/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:09:02 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/16 19:15:00 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Zombie
{
public:

	Zombie();
	~Zombie();

	void 	announce(void);
	void	set_name( std::string name );

private:

	std::string	_name;

};

Zombie* zombieHorde( int N, std::string name );

#endif