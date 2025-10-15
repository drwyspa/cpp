/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:20:02 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/10/15 22:37:28 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int	main()
{
	ClapTrap	a("Janusz");
	ClapTrap	b("Andżej");

	a.attack("Andżej");
	b.takeDamage(a.getAttackDamage());

	b.beRepaired(5);
	b.attack("Janusz");

	a.takeDamage(15);
	a.attack("Andżej");

	return 0;
}