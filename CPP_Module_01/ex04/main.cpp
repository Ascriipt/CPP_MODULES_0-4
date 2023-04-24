/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:53:30 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/24 18:18:36 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int	main( int ac, char **av ) {
	if (ac != 4)
	{
		std::cerr << "usage: ./replace <filename> <to_find> <replace>." << std::endl;
		return 1;
	}
	Replace	inst(av[1]);
	inst.run_replace(av[2], av[3]);
	return 0;
}