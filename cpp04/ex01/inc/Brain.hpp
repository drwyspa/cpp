/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:08:16 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/11/10 21:35:46 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class	Brain
{
	public:
		Brain();
		Brain(const Brain &src);
		Brain	&operator=(const Brain &src);
		~Brain();

		void		setIdea(int indx, const std::string &idea);
		std::string	getIdea(int indx) const;

	private:
		std::string	_ideas[100];
};

#endif