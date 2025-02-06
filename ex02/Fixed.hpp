/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:05:57 by izperez           #+#    #+#             */
/*   Updated: 2025/02/06 11:42:37 by izperez          ###   ########.fr       */
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
		Fixed(float _value);
		~Fixed();
		Fixed(const Fixed &src);
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
		bool operator<(const Fixed &obj)const;
		static Fixed &min(Fixed n1, Fixed n2);
		static const Fixed &min(const Fixed &n1, const Fixed &n2);
		static Fixed &max(Fixed n1, Fixed n2);
		static const Fixed &max(const Fixed &n1, const Fixed &n2);
		Fixed& operator++();
		Fixed operator++(int);
		
	private:
		static const int _bits = 8;
		float _value;
};
		
	std::ostream &operator<<(std::ostream &out, const Fixed &obj);


#endif