/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:59:40 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/07 21:17:53 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <cstring>

char	*totoupper(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		str[i] = std::toupper(str[i]);
	return (str);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (++i < ac)
		std::cout << totoupper(av[i]);
	std::cout << std::endl;
	return (0);
}