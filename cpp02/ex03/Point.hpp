/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 20:56:42 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/10/10 21:22:31 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class	Point
{
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &src);
		Point &operator=(const Point &src);
		~Point();
	
		Fixed	getX() const;
		Fixed	getY() const;

	private:
		const Fixed	_x;
		const Fixed	_y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif