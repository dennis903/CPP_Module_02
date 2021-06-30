/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:17:36 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/30 19:18:39 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &_Fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = _Fixed.getRawBits();
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
	this->value = Type.getRawBits();
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