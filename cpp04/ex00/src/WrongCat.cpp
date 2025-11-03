/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:59:38 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/11/03 22:15:19 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "Wrong cat default constructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	std::cout << "Wrong cat copy constructor called!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	std::cout << "Wrong cat assignment overload operator called!" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Wrong cat destructor called" << std::endl;
}

//Make sound method//
void	WrongCat::makeSound(void) const
{
	std::cout << this->_type << " makes wrong meeeooowww!" << std::endl;
}