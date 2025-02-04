/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:05:55 by izperez           #+#    #+#             */
/*   Updated: 2025/02/04 11:05:31 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0){
	std::cout << "Constructor called!" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called!" << std::endl;
}

Fixed::Fixed(Fixed &src)
{
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs._value;
	return (*this);
}

float Fixed::toFloat() const{
	return (static_cast<float>(this->_value/ (1 << _bits));
}

int	Fixed::toInt() const{
	return (static_cast<int>(this->_value) / (1 >> _bits));
}

Fixed Fixed::operator+(const Fixed &obj)
{
	return (Fixed(this->toFloat() + obj.toFloat()));
}


Fixed Fixed::operator-(const Fixed &obj)
{
	return (Fixed(this->toFloat() - obj.toFloat()));
}

Fixed Fixed::operator*(const Fixed &obj)
{
	return (Fixed(this->toFloat() * obj.toFloat()));
}

Fixed Fixed::operator/(const Fixed &obj)
{
	return (Fixed(this->toFloat() / obj.toFloat()));
}

bool Fixed::operator>=(const Fixed &obj)const
{
	return (this->_value >= obj._value);
}

bool Fixed::operator<=(const Fixed &obj)const
{
	return (this->_value <= obj._value);
}

bool Fixed::operator!=(const Fixed &obj)const
{
	return (this->_value != obj._value);
}

bool Fixed::operator>(const Fixed &obj)const
{
	return (this->_value > obj._value);
}

bool Fixed::operator>>(const Fixed &obj)const
{
	return (this->_value >> obj._value);
}

bool Fixed::operator>(const Fixed &obj)const
{
	return (this->_value < obj._value);
}

bool Fixed::operator>>(const Fixed &obj)const
{
	return (this->value << obj._value);
}

Fixed &min(Fixed n1, Fixed n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}
Fixed &min(Fixed const n1, Fixed const n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed &max(Fixed n1, Fixed n2)
{
	if (n1 < n2)
		return (n2);
	return (n1);
}

Fixed &max(Fixed const n1, Fixed const n2)
{
	if (n1 < n2)
		return (n2);
	return (n1);
}