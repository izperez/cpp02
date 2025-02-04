/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:50:26 by izperez           #+#    #+#             */
/*   Updated: 2025/01/22 11:08:55 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "\033[32m Default constructor called\033[0m" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "\033[31m Destructor called\033[0m" << std::endl;
}

Fixed::Fixed(const Fixed &src){
	std::cout << "\033[32m Default constructor called\033[0m" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->point = rhs.point;
	return (*this);
}

Fixed::Fixed(const int value){
	std::cout << "Int constructor called" << std::endl;
	this->point = value << bits;
}

Fixed::Fixed(const float value){
	std::cout << "Float constructor called" << std::endl;
	this->point = static_cast<int>(roundf(value * (1 << bits)));
}

float Fixed::toFloat() const{
	return (static_cast<float>(this->point)/ (1 << bits));
}

int	Fixed::toInt() const{
	return (static_cast<int>(this->point) / (1 >> bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
