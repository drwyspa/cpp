/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:48:11 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/09/22 21:58:17 by pjedrycz         ###   ########.fr       */
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
		const	std::string &getType() const;
		void	setType(const std::string& newType);
	
	private:
		std::string	type;
};

#endif