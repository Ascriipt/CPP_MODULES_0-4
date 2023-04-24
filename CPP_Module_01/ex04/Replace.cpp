/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:35:31 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/24 18:25:32 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace( std::string infile ) : _infile(infile), _outfile(infile + ".replace") {
}

Replace::~Replace() {
}

const std::string	Replace::getinfile( void ) const {
	return (this->_infile);
}

const std::string	Replace::getoutfile( void ) const {
	return (this->_outfile);
}

void	Replace::run_replace( std::string tofind, std::string toswap ) {
	std::ifstream	myfile(this->_infile.c_str());
	std::string		content;
	size_t			posx;

	if (myfile.is_open())
	{
		if ( std::getline(myfile, content, '\0') )
		{
			std::ofstream	neufile(this->_outfile.c_str());
			posx = content.find(tofind);
			while ( posx != std::string::npos )
			{
				content.erase(posx, tofind.length());
				content.insert(posx, toswap);
				posx = content.find(tofind);
			}
			neufile << content;
			neufile.close();
		}
		myfile.close();
	}
	else
		std::cerr << "unable to open : " << this->_infile << std::endl;
}