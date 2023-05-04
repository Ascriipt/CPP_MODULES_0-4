/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:21:05 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/04 19:34:24 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
	
	public:
	
		Brain(void);
		Brain( std::string ideas[100] );
		Brain( Brain const &old );
		~Brain(void);

		Brain&	operator=( Brain const &old );
	
	private:
	
		std::string _ideas[100];
	
};

#endif