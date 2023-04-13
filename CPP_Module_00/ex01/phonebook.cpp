/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:50:54 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/12 16:26:18 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <string>

phonebook::phonebook()
{
	// std::cout << "phonebook constructor called" << std::endl;
	return;
}

phonebook::~phonebook()
{
	// std::cout << "phonebook destructor called" << std::endl;
	return;
}

void phonebook::_add()
{
	static int	index;

	this->_contact_list[index % 8].set_contact_info(index % 8);
	index++;
	return;
}

void phonebook::_display_contact_info() const
{
	int index;
	int	input;

	index = -1;
	input = -1;
	std::cout << std::endl;
	std::cout << '|' << std::setw(10) << "Index";
	std::cout << '|' << std::setw(10) << "First Name";
	std::cout << '|' << std::setw(10) << "Last Name";
	std::cout << '|' << std::setw(10) << "Nickname";
	std::cout << '|' << std::endl;
	while (++index < 8)
		_contact_list[index].display_info();
	std::cout << "Enter the number of the contact you wish to display : ";
	std::cin >> input;
	if (std::cin.good() && (input >= 0 && input <= 7))
		_contact_list[input].display_all();
	else
	{
		std::cin.clear();
		std::cout << "Invalid input" << std::endl;
		std::cout << "returning to PhoneBook" << std::endl;
	}
}

int phonebook::_phonebook_parser(std::string str)
{
	if (str == "ADD")
	{
		phonebook::_add();
		return (1);
	}
	if (str == "SEARCH")
	{
		phonebook::_display_contact_info();
		return (1);
	}
	if (str == "EXIT")
		return (0);
	return (1);
}

void phonebook::run_phonebook()
{
	std::string input;

	std::cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << std::endl;
	std::cout << "x Hello! Welcome to an awesome PhoneBook! x" << std::endl;
	std::cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << std::endl;
	std::cout << std::endl;
	std::cout << "Here, you can use 'ADD', 'SEARCH', and 'EXIT'." << std::endl;
	std::cout << "Anything else will be discarded :o." << std::endl;
	std::cout << "You can add a maximum of 8 contacts !" << std::endl;
	std::cout << ">$";
	while (phonebook::_phonebook_parser(input) > 0)
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
			return;
		if (input != "EXIT" && input != "ADD")
			std::cout << ">$";
	}
}

int main(void)
{
	phonebook registry;

	registry.run_phonebook();
	return (0);
}