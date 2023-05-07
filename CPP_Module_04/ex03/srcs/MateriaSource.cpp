/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:54:21 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/07 21:42:39 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (_materias[i])
			delete _materias[i];
}

MateriaSource::MateriaSource( MateriaSource const &old ) {
	*this = old;
}

MateriaSource& MateriaSource::operator=( MateriaSource const &old ) {
	if (this != &old)
		for (int i = 0; i < 4; i++)
			_materias[i] = old._materias[i];
	return *this;
}

AMateria* MateriaSource::getMateria( std::string const &type ) {
	for (int i = 0; i < 4; i++)
		if (_materias[i] && _materias[i]->getType() == type)
			return _materias[i];
	return NULL;
}

void    MateriaSource::learnMateria( AMateria* materia ) {
	for (int i = 0; i < 4; i++)
		if (_materias[i] == NULL) {
			_materias[i] = materia;
			return;
		}
}

AMateria*   MateriaSource::createMateria( std::string const& type ) {
	for ( int i = 0; i < 4; i++ )
		if ( _materias[i] && _materias[i]->getType() == type )
			return _materias[i]->clone();
	return NULL;
}
