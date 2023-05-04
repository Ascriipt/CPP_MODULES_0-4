/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:26:32 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/04 19:33:11 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain& Brain::operator=( Brain const &old ) {
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &old)
		for (int i = 0; i < 100; i++)
			_ideas[i] = old._ideas[i];
	return *this;
}

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( std::string ideas[100] ) {
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = ideas[i];
}

Brain::Brain( Brain const &old ) {
	std::cout << "Brain copy constructor called" << std::endl;
	if (this != &old)
		*this = old;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}