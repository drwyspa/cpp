/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:12:48 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/10/22 21:39:44 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

// Construcors & destructor //

FragTrap::FragTrap(const std::string &name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap " << getName() << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
	: ClapTrap(src)
{
	std::cout << "FragTrap " << getName() << " copied!" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
	}
	std::cout << "FragTrap " << getName() << " assigned!" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << getName() << " destroyed!" << std::endl;
}

// Public functions //

void	FragTrap::attack(const std::string &target)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		_energyPoints--;
		std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << getName() << " has no energy or hit points left to perform the attack!" << std::endl;
	}
}

void	FragTrap::highFivesGuys()
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout << "FragTrap " << getName() << " wants some high fives!" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << getName() << " is drained and don't want to talk with others!" << std::endl;
	}
}