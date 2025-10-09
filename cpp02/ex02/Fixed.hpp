/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 20:58:49 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/10/09 21:35:01 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

class	Fixed
{
	private:
		int					_fixedPointVal;
		static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed &src);
		~Fixed();

		Fixed &operator=(const Fixed &src);

		bool	operator>(Fixed const &val) const;
		bool	operator<(Fixed const &val) const;
		bool	operator>=(Fixed const &val) const;
		bool	operator<=(Fixed const &val) const;
		bool	operator==(Fixed const &val) const;
		bool	operator!=(Fixed const &val) const;

		Fixed	operator+(Fixed const &val) const;
		Fixed	operator-(Fixed const &val) const;
		Fixed	operator*(Fixed const &val) const;
		Fixed	operator/(Fixed const &val) const;

		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);

		friend	std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};
#endif