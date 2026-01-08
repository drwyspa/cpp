/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 21:03:21 by pjedrycz          #+#    #+#             */
/*   Updated: 2026/01/08 22:37:40 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <exception>

class	Bureaucrat;

class	AForm
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;

	public:
		AForm(const std::string &name, int signGrade, int execGrade);
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);//can copy only isSigned. The rest is const.
		virtual ~AForm();

		const std::string	&getName() const;
		bool				getIsSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		
		void			beSigned(const Bureaucrat &bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;	

		class	GradeTooHighException : public std::exception
		{
			public:
				const char*	what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				const char*	what() const throw();
		};

		class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &os, const AForm &form);

#endif