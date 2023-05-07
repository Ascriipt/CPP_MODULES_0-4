/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:20:19 by maparigi          #+#    #+#             */
/*   Updated: 2023/05/07 19:34:32 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "\033[35mConstructing\033[0m" << std::endl;
	const Animal	*meta[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2) {
			meta[i] = new Cat();
			if (meta[i] == NULL)
				exit(1);
		}
		else {
			meta[i] = new Dog();
			if (meta[i] == NULL)
				exit (1);
		}
	}
	std::cout << std::endl;
	std::cout << "\033[35mTesting\033[0m" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "_type: " << meta[i]->getType() << std::endl;
		meta[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\033[35mDestroying\033[0m" << std::endl;
	for (int i = 0; i < 10; i++)
		delete(meta[i]);
	std::cout << std::endl;
	std::cout << "\033[31m----------------Deep-Copy----------------" << std::endl;
	std::cout << "\033[35mConstructing\033[0m" << std::endl;
	Dog *a = new Dog();
	if (a == NULL)
		exit(1);
	a->setIdea(0, "ueeeee");
	a->setIdea(1, "naaaaaan");
	a->setIdea(2, "prout");
	a->setIdea(101, "test");
	Dog *b = new Dog(*a);
	if (b == NULL)
		exit(1);
	std::cout << std::endl;
	std::cout << "\033[35mTesting a\033[0m" << std::endl;
	std::cout << "The " << a->getType() << " a has the following ideas: " << std::endl;
	a->showBrain();
	std::cout << std::endl;
	std::cout << "\033[35mDestroying a\033[0m" << std::endl;
	delete(a);
	std::cout << std::endl;
	std::cout << "\033[35mTesting b\033[0m" << std::endl;
	std::cout << "The " << b->getType() << " b has the following ideas: " << std::endl;
	b->showBrain();
	std::cout << std::endl;
	std::cout << "\033[35mDestroying b\033[0m" << std::endl;
	delete(b);

	return (0);
}