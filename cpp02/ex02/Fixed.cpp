/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 20:58:58 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/10/09 22:10:21 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Canonical part//

Fixed::Fixed() : _fixedPointVal(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointVal = n << _fractionalBits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointVal = roundf(f * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointVal = src._fixedPointVal;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_fixedPointVal = src._fixedPointVal;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//Getter & setter//

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointVal;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointVal = raw;
}

//Public ones//

int	Fixed::toInt(void) const
{
	return this->_fixedPointVal >> _fractionalBits;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(this->_fixedPointVal) / (1 << _fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

//Comparaison//

bool	Fixed::operator>(const Fixed &val) const
{
	return this->_fixedPointVal > val._fixedPointVal;
}

bool	Fixed::operator<(const Fixed &val) const
{
	return this->_fixedPointVal < val._fixedPointVal;
}

bool	Fixed::operator>=(const Fixed &val) const
{
	return this->_fixedPointVal >= val._fixedPointVal;
}

bool	Fixed::operator<=(const Fixed &val) const
{
	return this->_fixedPointVal <= val._fixedPointVal;
}

bool	Fixed::operator==(const Fixed &val) const
{
	return this->_fixedPointVal == val._fixedPointVal;
}

bool	Fixed::operator!=(const Fixed &val) const
{
	return this->_fixedPointVal != val._fixedPointVal;
}

//Math//

Fixed	Fixed::operator+(const Fixed &val) const
{
	Fixed	res;
	res.setRawBits(this->getRawBits() + val.getRawBits());
	return res;
}

Fixed	Fixed::operator-(const Fixed &val) const
{
	Fixed	res;
	res.setRawBits(this->getRawBits() - val.getRawBits());
	return res;
}

Fixed	Fixed::operator*(const Fixed &val) const
{
	Fixed	res;
	res.setRawBits(this->getRawBits() * val.getRawBits() >> _fractionalBits);
	return res;
}

Fixed	Fixed::operator/(const Fixed &val) const
{
	Fixed	res;
	res.setRawBits((this->getRawBits() << _fractionalBits) / val.getRawBits());
	return res;
}

//Increment & decrement//

Fixed	&Fixed::operator++()
{
	this->_fixedPointVal++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	this->_fixedPointVal++;
	return temp;
}

Fixed	&Fixed::operator--()
{
	this->_fixedPointVal--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	this->_fixedPointVal--;
	return temp;
}

//Min & max//

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}