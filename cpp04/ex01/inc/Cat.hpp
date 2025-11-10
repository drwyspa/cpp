/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:55:03 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/11/10 21:40:53 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat &src);
		Cat	&operator=(const Cat &src);
		~Cat(void);

		void	makeSound(void) const;
		virtual	std::string	getType() const;
		Brain	*getBrain() const;

	private:
		Brain	*_brain;
};

#endif