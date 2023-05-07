/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:54:27 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/07 21:49:19 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:

	AMateria*	_materias[4];

public:

	MateriaSource();
	~MateriaSource();

	MateriaSource( MateriaSource const & );
	MateriaSource&  operator=( MateriaSource const & );

	AMateria*		getMateria( std::string const & );
	AMateria*		createMateria( std::string const & );

	void			learnMateria( AMateria* );

};

#endif