/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:17:36 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/30 18:14:32 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &_Fixed)
{
	this->value = _Fixed.value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &Type)
{
	std::cout << "Assignation operation called" << std::endl;
	if (this == &Type)
		return (*this);
	this->value = Type.value;
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}