/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:49:47 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/09/22 21:53:02 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(const std::string &type) : type(type){}	

const	std::string	&Weapon::getType() const
{
	return type;
}

void	Weapon::setType(const std::string &newType)
{
	type = newType;
}