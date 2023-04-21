/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:53:30 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/21 19:16:05 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

int	main( int ac, char **av ) {
	if (ac != 4)
	{
		std::cerr << "usage: ./replace <filename> <to_find> <replace>." << std::endl;
		return EXIT_FAILURE;
	}
	replace	inst(av[1]);
	inst.run_replace(av[2], av[3]);
	return EXIT_SUCCESS;
}