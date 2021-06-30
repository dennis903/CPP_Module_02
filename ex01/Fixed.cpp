/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:17:36 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/30 23:22:10 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point_number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int int_value)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_number = int_value << this->bits;
}

Fixed::Fixed(float float_value)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_number = roundf(float_value * (1 << this->bits));
}

Fixed::Fixed(const Fixed &_Fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = _Fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &Type)
{
	std::cout << "Assignation operation called" << std::endl;
	if (this == &Type)
		return (*this);
	this->fixed_point_number = Type.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point_number = raw;
}

int		Fixed::getRawBits(void) const
{
	return (this->fixed_point_number);
}

int		Fixed::toInt(void) const
{
	return (this->fixed_point_number >> this->bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fixed_point_number / (1 << this->bits));
}

std::ostream & operator << (std::ostream &out, const Fixed &fixed)
{
	std::cout << fixed.toFloat();
	return (out);
}