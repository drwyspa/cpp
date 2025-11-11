/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:47:14 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/11/10 22:07:58 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called!" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor called!" << std::endl;
	*this = src;
	return;
}

Brain	&Brain::operator=(const Brain &src)
{
	std::cout << "Brain assignment overload operator called!" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called!" << std::endl;
}

//Getter & setter//

void	Brain::setIdea(int indx, std::string const &idea)
{
	if (indx >= 0 && indx < 100)
		this->_ideas[indx] = idea;
	else
	{
		std::cerr << "Index out of range!" << std::endl;
	}
}

std::string	Brain::getIdea(int indx) const
{
	if (indx >= 0 && indx < 100)
		return _ideas[indx];
	else
	{
		std::cerr << "Index out of range!" << std::endl;
		return "";
	}
}