/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:05:57 by izperez           #+#    #+#             */
/*   Updated: 2025/02/04 11:05:56 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &src);
		Fixed &operator=(const Fixed &rhs);
		float toFloat() const;
		int	toInt() const;
		Fixed operator+(const Fixed &obj);
		Fixed operator-(const Fixed &obj);
		Fixed operator*(const Fixed &obj);
		Fixed operator/(const Fixed &obj);
		bool operator>=(const Fixed &obj)const;
		bool operator<=(const Fixed &obj)const;
		bool operator!=(const Fixed &obj)const;
		bool operator>(const Fixed &obj)const;
		bool operator>>(const Fixed &obj)const;
		bool operator<(const Fixed &obj)const;
		bool operator<<(const Fixed &obj)const;
		Fixed &min(Fixed n1, Fixed n2);
		Fixed &min(Fixed const n1, Fixed const n2);
		Fixed &max(Fixed n1, Fixed n2);
		Fixed &max(Fixed const n1, Fixed const n2);

	private:
		int _bits = 8;
		float _value;
};

#endif