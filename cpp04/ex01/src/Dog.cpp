/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:58:57 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/11/02 18:04:33 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog constructor called!" << std::endl;
	_type = "Dog";
	return;
}

Dog::Dog(const Dog &src) : Animal(src._type)
{
	std::cout << "Dog copy constructor called!" << std::endl;
	*this = src;
	return;
}

Dog	&Dog::operator=(const Dog &src)
{
	std::cout << "Dog assignment overload operator called!" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called!" << std::endl;
	return;
}

void	Dog::makeSound(void) const
{
	std::cout << this->_type << " makes wooof!" << std::endl;
	return; 
}