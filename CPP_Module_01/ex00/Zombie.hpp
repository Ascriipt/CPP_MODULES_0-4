/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:09:02 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/14 17:34:23 by maparigi         ###   ########.fr       */
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

	Zombie( std::string name );
	~Zombie();

	void 	announce(void);
	void	randomChump(std::string name);

	Zombie*	newZombie(std::string name);

private:

	std::string	_name;

};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif