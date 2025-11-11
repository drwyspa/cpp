/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:59:09 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/11/11 21:33:54 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal() : _type("Default Animal")
{
	std::cout << "Animal constructor called!" << std::endl;
	return;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called!" << std::endl;
	*this = src;
	return;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << "Animal type constructor called!" << std::endl;
	return;
}

Animal	&Animal::operator=(const Animal &src)
{
	std::cout << "Animal assignment overload operator called!" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called!" << std::endl;
}

//Getter//
const std::string&	Animal::getType(void) const
{
	return this->_type;
}

//Make a sound method//
void	Animal::makeSound(void) const
{
	std::cout << "Animal sound!" << std::endl;
		return;
}