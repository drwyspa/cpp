/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 20:49:18 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/09/11 21:34:06 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie() : name(""){}

Zombie::Zombie(std::string name) : name(name) {}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void) const
{
	std::cout << name << ": Moooaaarrrr BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie named: " << name << " has been destroyed!" << std::endl;
}