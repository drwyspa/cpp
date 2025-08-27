/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 19:44:24 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/08/27 21:48:50 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"

void	show_commands();
//int	is_number(std::string s);////raczej nie potrzebne

class	PhoneBook
{
	public:
		PhoneBook();
		int	addContact();
		int	searchContact();
		int	showContact(int indx);

	private:
		Contact	record[8];
		int	nb_Contact;
};

#endif