/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:35:31 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/21 19:15:34 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

replace::replace( std::string infile ) : _infile(infile), _outfile(infile + ".replace") {
}

replace::~replace() {
}

const std::string	replace::getinfile( void ) const {
	return (this->_infile);
}

const std::string	replace::getoutfile( void ) const {
	return (this->_outfile);
}

void	replace::run_replace( std::string tofind, std::string toswap ) {
	std::ifstream	myfile(this->_infile);
	std::string		content;
	size_t			posx;

	if (myfile.is_open())
	{
		if ( std::getline(myfile, content, '\0') )
		{
			std::ofstream	newfile(this->_outfile);
			posx = content.find(tofind);
			while ( posx != std::string::npos )
			{
				content.erase(posx, tofind.length());
				content.insert(posx, toswap);
				posx = content.find(tofind);
			}
			newfile << content;
			newfile.close();
		}
		myfile.close();
	}
	else
	{
		std::cerr << "unable to open : " << this->_infile << std::endl;
		exit(EXIT_FAILURE);
	}
}