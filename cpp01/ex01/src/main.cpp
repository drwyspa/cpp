/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 21:00:31 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/09/15 21:14:48 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int	N = 3;
	Zombie*	zSoldier = zombieHorde(N, "Soldier_");

	std::cout << "Behold for " << N << " new Zombie Soldiers!" << std::endl << std::endl;

	for (int i = 0; i < N; i++)
		zSoldier[i].announce();

	delete[] zSoldier;

	return 0;
}