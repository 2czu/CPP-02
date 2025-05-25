/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacda-si <pacda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:26:40 by pacda-si          #+#    #+#             */
/*   Updated: 2025/05/25 23:11:15 by pacda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int &n)
{
	std::cout << "Integer constructor called" << std::endl;
	this->_rawBits = (n << this->_fracBits);
}

Fixed::Fixed(const float &f)
{
	std::cout << "Floating point constructor called" << std::endl;
	this->_rawBits = (int)(roundf(f * (1 << this->_fracBits)));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_rawBits = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	if (this != &other)
	{
		this->setRawBits(other.getRawBits());
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void Fixed::setRawBits(const int raw)
{
	this->_rawBits = raw;
}

float Fixed::toFloat() const
{
	return ((float)this->_rawBits / (1 << this->_fracBits));
}

int Fixed::toInt() const
{
	return ((int)(this->_rawBits >> this->_fracBits));
}

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return Fixed(this->getRawBits() * other.getRawBits());
}

Fixed Fixed::operator+(const Fixed &other) const
{
	return Fixed(this->getRawBits() + other.getRawBits());
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return Fixed(this->getRawBits() - other.getRawBits());
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return Fixed(this->getRawBits() / other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
	return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const
{
	return this->getRawBits() != other.getRawBits();
}

bool Fixed::operator>(const Fixed &other) const
{
	return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) const
{
	return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) const
{
	return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const
{
	return this->getRawBits() >= other.getRawBits();
}

Fixed &Fixed::operator++()
{
	this->_rawBits++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed toto(*this);
	++(*this);
	return (toto);
}

Fixed &Fixed::operator--()
{
	this->_rawBits--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed toto(*this);
	--(*this);
	return (toto);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (b < a ? b : a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}