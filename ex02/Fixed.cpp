/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:05:55 by izperez           #+#    #+#             */
/*   Updated: 2025/02/17 11:44:04 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0){
	std::cout << "Constructor called!" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called!" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{ 
	std::cout << "Copy constructor called!" << std::endl;
	*this = src;
}

Fixed::Fixed(const int value): _value(value << _bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value): _value(static_cast<int>(roundf(value*(1 << _bits)))){
	std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs._value;
	return (*this);
}

float Fixed::toFloat() const{
	return (static_cast<float>(this->_value) / (1 << _bits));
}

int	Fixed::toInt() const{
	return (_value / (1 << _bits));
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

bool Fixed::operator<(const Fixed &obj)const
{
	return (this->_value < obj._value);
}

Fixed &Fixed::min(Fixed &n1, Fixed &n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

const Fixed &Fixed::min(const Fixed &n1, const Fixed &n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed &Fixed::max(Fixed &n1, Fixed &n2)
{
	if (n1 < n2)
		return (n2);
	return (n1);
}

const Fixed &Fixed::max(const Fixed &n1, const Fixed &n2)
{
	if (n1 < n2)
		return (n2);
	return (n1);
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

//Prefix
Fixed &Fixed::operator++()
{
	++this->_value;
	return (*this);
}

//Sufix
Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++(*this);
	return (temp);
}