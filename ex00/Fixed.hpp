/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:56:10 by izperez           #+#    #+#             */
/*   Updated: 2025/01/07 13:32:00 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <ostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		int		getRawBits();
		void	setRawBits(int num);
		Fixed(Fixed &src);
		Fixed &operator=(Fixed &rhs);

	private:
		int					fixedpointNum;
		static const int	fracBits = 8;

};

#endif