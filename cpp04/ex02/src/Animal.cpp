/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:59:09 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/11/11 22:23:44 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

AAnimal::AAnimal() : _type("Default Animal")
{
	std::cout << "Animal constructor called!" << std::endl;
	return;
}

AAnimal::AAnimal(const AAnimal &src)
{
	std::cout << "Animal copy constructor called!" << std::endl;
	*this = src;
	return;
}

AAnimal::AAnimal(const std::string &type) : _type(type)
{
	std::cout << "Animal type constructor called!" << std::endl;
	return;
}

AAnimal	&AAnimal::operator=(const AAnimal &src)
{
	std::cout << "Animal assignment overload operator called!" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called!" << std::endl;
}

//Getter//
std::string	AAnimal::getType(void) const
{
	return this->_type;
}

//Make a sound method//
void	AAnimal::makeSound(void) const
{
	std::cout << "Animal sound!" << std::endl;
		return;
}