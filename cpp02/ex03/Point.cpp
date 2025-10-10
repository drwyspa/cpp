/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 20:56:56 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/10/10 21:23:21 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &src) : _x(src._x), _y(src._y) {}

Point	&Point::operator=(const Point &src)
{
	(void)src;
	return *this;
}

Point::~Point() {}

Fixed	Point::getX() const
{
	return _x;
}

Fixed	Point::getY() const
{
	return _y;
}