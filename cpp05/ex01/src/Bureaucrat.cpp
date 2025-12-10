/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 21:43:34 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/12/05 22:11:41 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

//Constructor with validation//
Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

//Copy constructor//
Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{}

//Assignment operator - copy only grade//
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		grade = other.grade;
	return *this;
}

//Destructor//
Bureaucrat::~Bureaucrat()
{}

//Getters//
const std::string& Bureaucrat::getName() const
{
	return name;
}

int	Bureaucrat::getGrade() const
{
	return grade;
}

//Grade changing//
void	Bureaucrat::incrementGrade()
{
	if (grade <= 1)
		throw GradeTooHighException();
	grade--;	
}

void	Bureaucrat::decrementGrade()
{
	if (grade >= 150)
		throw GradeTooLowException();
	grade++;
}

//Exceptions implementation//
const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is to high!";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

//Operator <<//
std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}
