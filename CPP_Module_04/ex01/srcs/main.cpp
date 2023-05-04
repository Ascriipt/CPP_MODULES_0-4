/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:20:19 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/04 19:51:40 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#define N_ANIMALS 10

int main()
{
const Animal *tab[N_ANIMALS];
const Animal* j = new Dog();
const Animal* i = new Cat();
for (int i = 0; i < N_ANIMALS; i++)
{
	if (i < N_ANIMALS / 2)
		tab[i] = new Dog();
	else
		tab[i] = new Cat();
}
delete j;//should not create a leak
delete i;
for (int i = 0; i < N_ANIMALS; i++)
	delete tab[i];
return 0;
}