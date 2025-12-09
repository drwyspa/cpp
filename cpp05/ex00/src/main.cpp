/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 21:43:46 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/12/09 22:47:10 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int	main()
{
	//#1 - creating the object//
	try
	{
		Bureaucrat b1("Zdzislawa", 42);
		std::cout << "Test #1: " << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Test #1 generic exception: " << e.what() << std::endl;
	}

	//#2 - wrong range constructor (grade is too high)//
	try
	{
		Bureaucrat b2("Stanislaw", 0);
		std::cout << "Test #2: " << b2 << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "Test #2 range exception: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "Test #2 range exception: " << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Test #2 generic exception: " << e.what() << std::endl;
	}

	//#3 - wrong range constructor (grade is too low)//
	try
	{
		Bureaucrat b3("Antoni", 200);
		std::cout << "Test #3: " << b3 << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "Test #1 range exception: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "Test #1 range exception: " << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Test #1 generic exception: " << e.what() << std::endl;
	}

	//#4 - increment in correct range//
	try
	{
		Bureaucrat b4("Zbigniewa", 2);
		std::cout << "Test #4 start: " << b4 << std::endl;
		b4.incrementGrade(); //increment from 2 to 1
		std::cout << "test #4 after incrementation: " << b4 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Test #4 generic exception: " << e.what() << std::endl;
	}

	//#5 - decrement in correct range//
	try
	{
		Bureaucrat b5("Adam", 2);
		std::cout << "Test #5 start: " << b5 << std::endl;
		b5.incrementGrade(); //increment from 2 to 1
		std::cout << "test #5 after decrementation: " << b5 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Test #5 generic exception: " << e.what() << std::endl;
	}

	//#6 - increment too high over the range//
	try
	{
		Bureaucrat b6("Magdalena", 1);
		std::cout << "Test #6 start: " << b6 << std::endl;
		b6.incrementGrade();//expecting Grade too high exception.
		std::cout << "Test #6 after the incrementation: " << b6 << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "Test #6 range exception: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "Test #6 range exception: " << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Test #6 generic exception: " << e.what() << std::endl;
	}

	//#7 - decrement too low over the range//
	try
	{
		Bureaucrat b7("Leonard", 150);
		std::cout << "Test #7 start: " << b7 << std::endl;
		b7.decrementGrade();//expecting Grade too low exception.
		std::cout << "Test #7 after the incrementation: " << b7 << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "Test #7 range exception: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "Test #7 range exception: " << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Test #7 generic exception: " << e.what() << std::endl;
	}
	return 0;
}