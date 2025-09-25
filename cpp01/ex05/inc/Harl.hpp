/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 21:17:53 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/09/25 21:45:22 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <fstream>
#include <string>

class	Harl
{
	public:
	Harl();	
	void	complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	typedef	void	(Harl::*HarlComplaints)(void);
	static const	std::string levels[4];
	static const	HarlComplaints complaints[4];
};

#endif