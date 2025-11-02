/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:55:31 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/11/02 16:55:39 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP
# include <iostream>
# include <string>

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal(const std::string &type);
		WrongAnimal	&operator=(const WrongAnimal &src);
		virtual	~WrongAnimal(void);

		const std::string&	getAnimalType(void) const;
		virtual void	makeSound(void) const;

	protected:
		std::string	_type;
};

#endif