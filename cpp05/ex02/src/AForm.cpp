/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 21:03:30 by pjedrycz          #+#    #+#             */
/*   Updated: 2026/01/21 23:08:52 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"
#include "../inc/Bureaucrat.hpp"

AForm::AForm(const std::string &name, int signGrade, int execGrade)
	: name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &other)
	: name(other.name), isSigned(other.isSigned), signGrade(other.signGrade), execGrade(other.execGrade) {}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		//Only isSigned isn't const type variable, so only that could be changed.
		isSigned = other.isSigned;
	}
	return *this;
}

AForm::~AForm() {}

const	std::string &AForm::getName() const
{
	return name;
}

bool	AForm::getIsSigned() const
{
	return isSigned;
}

int		AForm::getSignGrade() const
{
	return signGrade;
}

int		AForm::getExecGrade() const
{
	return execGrade;
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (isSigned)
		throw std::logic_error("Already signed");
	if (bureaucrat.getGrade() > signGrade)
		throw GradeTooLowException();
	isSigned = true;
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return "Waning! Form grade is too high!";
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return "Warning! Form grade is too low!";
}

std::ostream	&operator<<(std::ostream &os, const AForm &form)
{
	os << "Form \"" << form.getName() << "\""
		<< " | signed: " << (form.getIsSigned() ? "yes" : "no")
		<< " | grade to sign: " << form.getSignGrade()
		<< " | grade to execute: " << form.getExecGrade();
	return os;
}

const char*	AForm::FormNotSignedException::what() const throw()
{
	return "Form is not signed!";
}