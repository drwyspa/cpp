/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:04:41 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/09/10 21:34:42 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int	main(void)
{
	//First Zombies created on heap - dynamic memory allocation.
	//We have to manually destroy them and free the memory.
	
	std::cout << "New Zombies (heap ones):" << std::endl;

	const std::string	names[] = 
	{
		"Andrzej Sterta",
		"Janusz Sterta",
		"Karyna Sterta",
		"Twoja Stara Sterta"
	};

	Zombie*	heapZombies[4];

	for (int i = 0; i < 4; i++)
	{
		heapZombies[i] = newZombie(names[i]);
		heapZombies[i]->announce();
	}
	for (int i = 0; i < 4; i++)
		delete heapZombies[i];

	//Then stack zombies goes. 
	//They exists as long as the function which creates them.

	std::cout << "Random Chumps (stack Zombies):" << std::endl;

	randomChump("Ilona Stos");
	randomChump("Mariusz Stos");
	randomChump("Babcia Stos");
	randomChump("Dziadek Stos");

	return 0;
}