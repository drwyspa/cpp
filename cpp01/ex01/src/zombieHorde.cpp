/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 20:49:45 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/09/15 21:04:50 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

//Create N number of Zombies. 
//Give each a "name".


Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	zSoldier = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::ostringstream oss;
		oss << name << (i + 1);
		zSoldier[i].setName(oss.str());
	}
	return zSoldier;
}