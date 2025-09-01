/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 20:13:30 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/09/01 19:42:29 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	nb_Contact = 0;
}

std::string	getInput(const std::string& prompt)
{
	std::string	input;
	do {
		std::cout << prompt;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Error: please input some value." << std::endl;
	} while (input.empty());
	return (input);
}

int	PhoneBook::addContact()
{
	if (PhoneBook::nb_Contact == 8)
	{
		std::cout << "Max number of record reached. Replacing last one with new one." << std::endl;
		for (int i = 0; i < 7; i++)
		{
			record[i] = record[i + 1];
			record[i].setId(i);
		}
		PhoneBook::nb_Contact--;
	}
	std::string input;

	Contact& c = record[nb_Contact];

	c.setFirstName(getInput("First name: "));
	c.setLastName(getInput("Last name: "));
	c.setNickName(getInput("Nick name: "));
	c.setNumber(getInput("Phone number: "));
	c.setSecret(getInput("Secret: "));

	record[PhoneBook::nb_Contact].setId(PhoneBook::nb_Contact);
	nb_Contact++;
	return 0;
}

int	PhoneBook::searchContact()
{
	if (PhoneBook::nb_Contact == 0)
	{
		std::cout << "Error: no contact in the Phone Book." << std::endl;
		return -1;
	}
	std::cout << "|  Index  |First Name| Last Name| Nickname |\n";
	for (int i = 0; i < PhoneBook::nb_Contact; i++)
	{
		std::cout << "\n";
		std::cout << std::setw(10) << record[i].getId() + 1;
		std::cout << "|";
		show_record(record[i].getFirstName());
		std::cout << "|";
		show_record(record[i].getLastName());
		std::cout << "|";
		show_record(record[i].getNickName());
		std::cout << "|" << std::endl;
	}

	std::cout << "Enter index of the searching contact: ";
	std::string input;
	std::getline(std::cin, input);

	int	indx;
	std::stringstream ss(input);
	if (!(ss >> indx) || indx < 1)
	{
		std::cout << "Error: wrong input" << std::endl;
		return -1;
	}

	std::cout << "First name: " << record[indx].getFirstName() << std::endl;
	std::cout << "Last name: " << record[indx].getLastName() << std::endl;
	std::cout << "Nick name: " << record[indx].getNickName() << std::endl;
	std::cout << "Phone number: " << record[indx].getNumber() << std::endl;
	std::cout << "Secret: " << record[indx].getSecret() << std::endl;

	return 0;
}
