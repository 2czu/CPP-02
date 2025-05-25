/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacda-si <pacda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:26:38 by pacda-si          #+#    #+#             */
/*   Updated: 2025/05/25 23:10:36 by pacda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

class Fixed
{
	private:

		int 				_rawBits;
		static const int 	_fracBits = 8;

	public:

		Fixed();
		Fixed(const int &n);
		Fixed(const float &f);
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		
		Fixed operator*(const Fixed &other) const;
		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;

		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;

		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

		~Fixed();

		int getRawBits() const;
		void setRawBits(const int raw);
		float toFloat() const;
		int toInt() const;
};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);


#endif