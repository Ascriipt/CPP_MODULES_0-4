/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:52:59 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/24 16:12:11 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <string>

class replace
{
public:

	replace( std::string infile );
	~replace();

	void	run_replace( std::string tofind, std::string toswap );

	const std::string	getinfile() const;
	const std::string	getoutfile() const;

private:

	std::string	_infile;
	std::string	_outfile;

};

#endif