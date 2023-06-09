/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:40:04 by ael-khni          #+#    #+#             */
/*   Updated: 2023/04/24 17:03:36 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int ac, char **av ) {
	Harl	inst;

	if (ac != 2)
		return 1;
	inst.complain(av[1]);
	return 0;
}