/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:50:24 by izperez           #+#    #+#             */
/*   Updated: 2025/01/22 11:08:45 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>
# include <ostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &rhs);
		Fixed(const int value);
		Fixed(const float value);
		
		float toFloat() const;
		int	toInt() const;

	private:
		int bits = 8;
		float point;
};

//Overload of the insertion (<<) operator
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif