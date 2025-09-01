/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 19:35:14 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/09/01 20:07:24 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

void	show_commands()
{
	std::cout << "Type one of above commands to start:" << std::endl;
	std::cout << "- ADD - to add new record to your PhoneBook." << std::endl;
	std::cout << "- SEARCH - to search the record, by it's ID." << std::endl;
	std::cout << "- EXIT - to leave your PhoneBook." << std::endl;
}

int	main(void)
{
	PhoneBook 	PhoneBook;
	std::string	input;
	show_commands();
	while (true)
	{
		std::cout << "Choose your action: ";
		if ((std::getline(std::cin, input) == 0) || (input == "EXIT"))
			return 0;
		else if (input == "ADD")
			PhoneBook.addContact();
		else if (input == "SEARCH")
			PhoneBook.searchContact();
		else
			std::cout << "ERROR: wrong command. Please try again." << std::endl;
	}
	return 0;
}
