/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:17:33 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/30 21:57:26 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <cmath>
#include <iostream>

class						Fixed
{
	private:
		int					fixed_point_number;
		static int const	bits = 8;
	public:
		Fixed();
		Fixed(int int_value);
		Fixed(float float_value);
		Fixed(const Fixed &_Fixed);
		~Fixed();
		Fixed &operator = (const Fixed &fixed);
		void	setRawBits(int const raw);
		int		getRawBits (void) const;
		int		toInt(void) const;
		float	toFloat(void) const;
};
std::ostream & operator << (std::ostream &out, const Fixed &fixed);
#endif