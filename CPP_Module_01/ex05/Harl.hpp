/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:09:56 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/22 17:29:14 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <iomanip>

class Harl
{
public:

	Harl();
	~Harl();

	void	complain( std::string level );

private:

	void	info();
	void	error();
	void	debug();
	void	warning();

};

typedef	void( Harl::*t_func )( void );

#endif