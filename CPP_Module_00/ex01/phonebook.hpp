/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:48:08 by maparigi          #+#    #+#             */
/*   Updated: 2023/04/12 15:05:17 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class phonebook {

public:

	phonebook();
	~phonebook();

	void	run_phonebook();

private:

	contact	_contact_list[8];

	void	_add();
	void	_parse_input(std::string str);
	void	_display_contact_info() const;

	int		_phonebook_parser(std::string str);

};

#endif