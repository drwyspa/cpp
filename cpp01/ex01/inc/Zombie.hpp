/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 20:49:06 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/09/11 21:00:10 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class	Zombie
{
	public:
		void	announce(void) const;
		void	setName(std::string name);
		Zombie*	zombieHorde(int N, std::string name);

		Zombie();
		Zombie(std::string name);
		~Zombie();
	
	private:
		std::string	name;
};

#endif