/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 19:49:21 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/16 20:06:57 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;
	
	std::cout << "Address of str : " << &str << std::endl;
	std::cout << "Address in stringPTR : " << stringPTR << std::endl;
	std::cout << "Address in stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "str : " << str << std::endl;
	std::cout << "stringPTR : " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;
}