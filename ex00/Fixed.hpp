/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:17:33 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/30 19:18:45 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
class						Fixed
{
	private:
		int					value;
		static int const	bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &_Fixed);
		~Fixed();
		Fixed &operator = (const Fixed &fixed);
		void	setRawBits(int const raw);
		int		getRawBits (void) const;
};
#endif