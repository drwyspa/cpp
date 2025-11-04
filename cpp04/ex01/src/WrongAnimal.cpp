/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:59:25 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/11/03 21:59:38 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Wrong Animal")
{
	std::cout << "Wrong animal constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : _type(src._type)
{
	std::cout << "Wrong animal copy constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
	std::cout << "Wrong animal type constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Wrong animal destructor called!" << std::endl;
}

//Getter//
const std::string&	WrongAnimal::getAnimalType(void) const
{
	return this->_type;
}

//Make sound method//
void	WrongAnimal::makeSound(void) const
{
	std::cout << this->_type << " makes wrong sound!" << std::endl;
	return;
}
