/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 21:43:24 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/12/05 22:01:19 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;

	public:
		Bureaucrat (const std::string &name, int grade);
		Bureaucrat (const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();

		//Getters//
		const std::string	&getName() const;
		int					getGrade() const;

		//Grade change methods//
		void	incrementGrade();
		void	decrementGrade();

		//Exceptions//
		class	GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

//Operator <<//
std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif