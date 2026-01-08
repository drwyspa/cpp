/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 21:03:30 by pjedrycz          #+#    #+#             */
/*   Updated: 2026/01/05 23:09:11 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"
#include "../inc/Bureaucrat.hpp"

Form::Form(const std::string &name, int signGrade, int execGrade)
	: name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &other)
	: name(other.name), isSigned(other.isSigned), signGrade(other.signGrade), execGrade(other.execGrade) {}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
	{
		//Only isSigned isn't const type variable, so only that could be changed.
		isSigned = other.isSigned;
	}
	return *this;
}

Form::~Form() {}

const	std::string &Form::getName() const
{
	return name;
}

bool	Form::getIsSigned() const
{
	return isSigned;
}

int		Form::getSignGrade() const
{
	return signGrade;
}

int		Form::getExecGrade() const
{
	return execGrade;
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > signGrade)
		throw GradeTooLowException();
	isSigned = true;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return "Waning! Form grade is too high!";
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return "Warinign! Form grade is too low!";
}

std::ostream	&operator<<(std::ostream &os, const Form &form)
{
	os << "Form \"" << form.getName() << "\""
		<< " | signed: " << (form.getIsSigned() ? "yes" : "no")
		<< " | grade to sign: " << form.getSignGrade()
		<< " | grade to execute: " << form.getExecGrade();
	return os;
}