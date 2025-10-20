/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:17:42 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/10/20 22:32:39 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

// Construcors & destructor //

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << getName() << " created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
	: ClapTrap(src)
{
	std::cout << "ScavTrap " << getName() << " copied!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
	}
	std::cout << "ScavTrap " << getName() << " assigned!" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << " destroyed!" << std::endl;
}

// Public funcitons//

void	ScavTrap::attack(const std::string &target)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		_energyPoints--;
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << getName() << " has no energy or hit points left to perform the attack!" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << getName() << " has no energy or hit points left to enter Gate keeper mode!" << std::endl;
	}
}