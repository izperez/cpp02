/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:50:26 by izperez           #+#    #+#             */
/*   Updated: 2025/02/17 11:19:41 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): point(0){
	std::cout << "\033[32m Default constructor called\033[0m" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "\033[31m Destructor called\033[0m" << std::endl;
}

Fixed::Fixed(const Fixed &src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->point = rhs.point;
	return (*this);
}

Fixed::Fixed(const int value): point(value << bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value): point(static_cast<int>(roundf(value*(1 << bits)))){
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat() const{
	return (static_cast<float>(this->point)/ (1 << bits));
}

int	Fixed::toInt() const{
	return (point / (1 << bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
