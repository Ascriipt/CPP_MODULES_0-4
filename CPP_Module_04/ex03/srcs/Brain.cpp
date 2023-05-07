/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:50:17 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/07 18:56:31 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &copy) {
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = copy;
}

Brain::~Brain() {
	std::cout << "Brain Deconstructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &src) {
	std::cout << "Brain Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	for (int i = 0; i < 100; i++)
	{
		if (src._ideas[i].length() > 0)
			this->_ideas[i].assign(src._ideas[i]);
	}
	return *this;
}

const std::string	Brain::getIdea(size_t i) const {
	if (i < 100)
		return(this->_ideas[i]);
	else
		return "\033[35mYou are looking too deep here buddy.\033[0m";
}

const std::string *Brain::getIdeaAddress(size_t i) const {
	if (i < 100)
		return (&(this->_ideas[i]));
	return NULL;
}

void	Brain::setIdea(size_t i, std::string idea) {
	if (i < 100)
		this->_ideas[i] = idea;
	else
		std::cout << "\033[35mSeems you are out of brain capacity :0.\033[0m" << std::endl;
}