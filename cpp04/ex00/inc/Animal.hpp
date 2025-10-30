/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:52:38 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/10/30 19:03:51 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class	Animal
{
	public:
		Animal(void);
		Animal(const Animal &src);
		Animal(const std::string &type);
		Animal	&operator=(const Animal &src);
		virtual	~Animal(void);

		const std::string	getAnimalType(void) const;
		virtual void	makeSound(void) const;

	protected:
		std::string	_type;
};

#endif