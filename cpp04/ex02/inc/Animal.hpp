/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:52:38 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/11/11 22:20:29 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class	AAnimal
{
	public:
		AAnimal(void);
		AAnimal(const AAnimal &src);
		AAnimal(const std::string &type);
		AAnimal	&operator=(const AAnimal &src);
		virtual	~AAnimal(void);

		virtual std::string	getType(void) const;
		virtual void	makeSound(void) const;

	protected:
		std::string	_type;
};

#endif