/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:21:36 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/13 19:22:52 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact()
{
	//std::cout << "Contact created" << std::endl;
	return;
}

contact::~contact()
{
	//std::cout << "Contact destroyed" << std::endl;
	return;
}

std::string contact::_print_str_10(std::string str) const {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void	contact::display_all() const
{
	if (_first_name.empty() || _last_name.empty() || _nickname.empty()
	|| _phone_number.empty() || _darkest_secret.empty())
	{
		std::cout << "contact not set" << std::endl;
		return;
	}
	std::cout << "contact #" << this->_index << std::endl;
	std::cout << "first name : " << this->_first_name << std::endl;
	std::cout << "last name : " << this->_last_name << std::endl;
	std::cout << "nickname : " << this->_nickname << std::endl;
	std::cout << "phone number : " << this->_phone_number << std::endl;
	std::cout << "darkest secret : " << this->_darkest_secret << std::endl;
}

void	contact::display_info() const
{
	if (this->_first_name.empty() || this->_last_name.empty() || this->_nickname.empty())
		return;
	std::cout << '|' << std::setw(10) << this->_index;
	std::cout << '|' << std::setw(10) << _print_str_10(this->_first_name);
	std::cout << '|' << std::setw(10) << _print_str_10(this->_last_name);
	std::cout << '|' << std::setw(10) << _print_str_10(this->_nickname);
	std::cout << '|' << std::endl;
}

int	contact::set_contact_info(int index)
{
	this->_index = index;
	std::cout << "Please input your contact's first name : ";
	std::cin >> this->_first_name;
	std::cout << "Please input your contact's last name : ";
	std::cin >> this->_last_name;
	std::cout << "Please input your contact's nickname : ";
	std::cin >> this->_nickname;
	std::cout << "Please input your contact's phone number : ";
	std::cin >> this->_phone_number;
	std::cout << "Please input your contact's darkest secret... : ";
	std::cin >> this->_darkest_secret;
	return 1;
}
