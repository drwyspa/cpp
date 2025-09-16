/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:48:11 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/09/16 17:58:35 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class	Weapon
{
	public:
		Weapon(const std::string &type);
		//getter
		//setter
	
	private:
		std::string	type;
};

#endif