/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:58:48 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/11/10 22:25:25 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(void): _brain(new Brain())
{
	_type = "Cat";
	std::cout << "Cat constructor called!" << std::endl;
	return;
}

Cat::Cat(const Cat &src) : Animal(), _brain(NULL)
{
	std::cout << "Cat copy constructor called!" << std::endl;
	*this = src;
	return;
}

Cat	&Cat::operator=(const Cat &src)
{
	std::cout << "Cat assignment overload operator called!" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		if (this->_brain != NULL)
			delete (this->_brain);
		this->_brain = new Brain(*src._brain);
	}
	return *this;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Cat destructor called!" << std::endl;
	return;
}

void	Cat::makeSound(void) const
{
	std::cout << this->_type << " makes mmmeeeoooowwww!" << std::endl;
	return; 
}

Brain	*Cat::getBrain() const
{
	return this->_brain;
}

std::string	Cat::getType() const
{
	return _type;
}