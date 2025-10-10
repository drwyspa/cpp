/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 20:57:08 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/10/10 22:13:19 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static Fixed	getAbsVal(Fixed const &f)
{
	Fixed	zero(0);
	return (f < zero) ? zero - f : f;
}

//Shoelace formula for triangle area//

Fixed	getTriangleArea(Point const a, Point const b, Point const c)
{
	Fixed	area = (a.getX() * (b.getY() - c.getY()) + 
					b.getX() * (c.getY() - a.getY()) +
					c.getX() * (a.getY() - b.getY()));
	return getAbsVal(area) / Fixed(2);
}

//If the point is inside triangle the sum of A1, A2 and A3//
//areas is close to A//

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	A = getTriangleArea(a, b, c);
	Fixed	A1 = getTriangleArea(point, b, c);
	Fixed	A2 = getTriangleArea(a, point, c);
	Fixed	A3 = getTriangleArea(a, b, point);

	Fixed	sum = A1 + A2 + A3;
	Fixed	epsilon(0.01f);

	if (getAbsVal(sum - A) < epsilon && A1 > Fixed(0)
									&& A2 > Fixed(0)
									&& A3 > Fixed(0))
		return true;
	else
		return false;
}