/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:58:57 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/11/11 21:35:12 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(void): _brain(new Brain())
{
	std::cout << "Dog constructor called!" << std::endl;
	_type = "Dog";
	return;
}

Dog::Dog(const Dog &src) : Animal(src), _brain(new Brain(*src._brain))
{
	std::cout << "Dog copy constructor called!" << std::endl;
	*this = src;
	return;
}

Dog	&Dog::operator=(const Dog &src)
{
	std::cout << "Dog assignment overload operator called!" << std::endl;
	if (this != &src)
	{
		Animal::operator=(src);
		delete _brain;
		_brain = new Brain(*src._brain);
	}
	return *this;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Dog destructor called!" << std::endl;
	return;
}

void	Dog::makeSound(void) const
{
	std::cout << this->_type << " makes wooof!" << std::endl;
	return; 
}

Brain	*Dog::getBrain() const
{
	return _brain;
}

std::string	Dog::getType() const
{
	return _type;
}