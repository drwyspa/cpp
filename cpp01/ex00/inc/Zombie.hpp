/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:05:23 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/09/10 21:27:49 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		void	announce(void) const;
		Zombie(std::string name);
		~Zombie();

	private:
		std::string	name;
};

//Helper functions declaration//

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif