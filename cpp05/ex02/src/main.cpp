/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 21:43:46 by pjedrycz          #+#    #+#             */
/*   Updated: 2026/01/05 23:03:23 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int	main()
{ 
	std::cout << "TEST #1: Creating correct form" << std::endl; 
	try
	{
		Form f1("TaxForm", 50, 25);
		std::cout << f1 << std::endl;
	}
	catch (const std::exception &e) 
	{ 
		std::cerr << "Exception: " << e.what() << std::endl;
	} 
	
	std::cout << "\nTEST 2: Creating form with too high grade" << std::endl;
	try
	{
		Form f2("InvalidHigh", 0, 10); // grade < 1 
		std::cout << f2 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
	std::cout << "\nTEST #3: Creating form with grade too low" << std::endl;
	try
	{
		Form f3("InvalidLow", 100, 200); // grade > 150
		std::cout << f3 << std::endl;
	}
	catch (const std::exception &e) 
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
	std::cout << "\nTEST #4: Sign up the form correctly" << std::endl;
	try
	{
		Bureaucrat b1("Alice", 40);
		Form f4("TravelPermit", 50, 20);
		std::cout << b1 << std::endl;
		std::cout << f4 << std::endl;
		b1.signForm(f4); // should works
		std::cout << f4 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
	std::cout << "\nTEST #5: Too low grade Bureaucrat trying to sign the form" << std::endl;
	try
	{
		Bureaucrat b2("Bob", 120);
		Form f5("SecretDocument", 30, 10);
		std::cout << b2 << std::endl; std::cout << f5 << std::endl;
		b2.signForm(f5); // shouldn't work
		std::cout << f5 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
	std::cout << "\nTEST #6: Signing the form twice" << std::endl;
	try
	{
		Bureaucrat b3("Charlie", 1);
		Form f6("TopSecret", 10, 5);
		b3.signForm(f6); // OK b3.signForm(f6); // second time — should throw a warinig
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return 0;
}