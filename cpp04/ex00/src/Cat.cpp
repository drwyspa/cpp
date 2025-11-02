/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:58:48 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/11/02 18:04:34 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat constructor called!" << std::endl;
	return;
}

Cat::Cat(const Cat &src) : Animal(src._type)
{
	std::cout << "Cat copy constructor called!" << std::endl;
	*this = src;
	return;
}

Cat	&Cat::operator=(const Cat &src)
{
	std::cout << "Cat assignment overload operator called!" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called!" << std::endl;
	return;
}

void	Cat::makeSound(void) const
{
	std::cout << this->_type << " makes mmmeeeoooowwww!" << std::endl;
	return; 
}