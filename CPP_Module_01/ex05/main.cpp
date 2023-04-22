/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:40:04 by ael-khni          #+#    #+#             */
/*   Updated: 2023/04/23 01:53:33 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void ) {

    std::string input;
    Harl        harl;

    do
    {
        std::cout << "Enter a level: ";
        std::getline(std::cin, input);
		if (!std::cin.good() || std::cin.eof())
			return EXIT_FAILURE;
        harl.complain(input);
    } while (input != "exit");

    return EXIT_SUCCESS;
}