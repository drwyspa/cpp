/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:49:17 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/09/22 21:39:35 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(const std::string &name);
		void	setWeapon(Weapon &weapon);
		void	attack() const;
	
	private:
		std::string	name;
		Weapon	*weapon;
};

#endif