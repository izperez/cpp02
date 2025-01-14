/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:56:12 by izperez           #+#    #+#             */
/*   Updated: 2025/01/07 13:31:53 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fixedpointNum(0) {
	std::cout << "\033[32m Default constructor called\033[0m" << std::endl;
}
Fixed::~Fixed(){
	std::cout << "\033[31m Destructor called \033[0m" << std::endl;
}

//source: se utiliza en el constructor de copia; creamos copia del objeto existente.
Fixed::Fixed(Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	//this->fixedpointNum = src->getRawBits();
	*this = src;
}

//right-hand side: se utiliza en el operador de copia; es el objeto que estamos asignando a otro obj exist.
Fixed &Fixed::operator=(Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->fixedpointNum = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits()
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedpointNum);
}
void	Fixed::setRawBits(int num)
{
	this->fixedpointNum = num;
}
