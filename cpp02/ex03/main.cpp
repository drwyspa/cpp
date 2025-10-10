/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 20:58:38 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/10/10 22:18:00 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main() 
{
	//triangle//
	Point	a(0, 0);
	Point	b(10, 0);
	Point	c(5, 10);

	//Test points//
	Point	inside(5, 5);
	Point	edge(5, 0);
	Point	vertex(5, 10);
	Point	outside(10, 10);

	//Tests//
	std::cout << "Does the point inside(5, 5) is inside the triangle? Answer: " << (bsp(a, b, c, inside) ? "yes" : "no") << std::endl;
	std::cout << "Does the point edge(5, 0) is inside the triangle? Answer: " << (bsp(a, b, c, edge) ? "yes" : "no") << std::endl;
	std::cout << "Does the point vertex(5, 10) is inside the triangle? Answer: " << (bsp(a, b, c, vertex) ? "yes" : "no") << std::endl;
	std::cout << "Does the point outside(10, 10) is inside the triangle? Answer: " << (bsp(a, b, c, inside) ? "no" : "yes") << std::endl;

	return 0;
}
