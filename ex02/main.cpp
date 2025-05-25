/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacda-si <pacda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:11:57 by pacda-si          #+#    #+#             */
/*   Updated: 2025/05/25 23:15:07 by pacda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a(42.42f);
	Fixed b(10);
	Fixed c(42.42f);

	std::cout << YELLOW << "\n=== Initial Values ===\n" << RESET << std::endl;
	std::cout << GREEN << "a: " << CYAN << a << RESET << std::endl;
	std::cout << GREEN << "b: " << CYAN << b << RESET << std::endl;
	std::cout << GREEN << "c: " << CYAN << c << RESET << std::endl;

	std::cout << YELLOW << "\n=== Comparison Operators ===\n" << RESET << std::endl;
	std::cout << GREEN << "a == c: " << CYAN << (a == c) << RESET << std::endl;
	std::cout << GREEN << "a != b: " << CYAN << (a != b) << RESET << std::endl;
	std::cout << GREEN << "a > b: " << CYAN << (a > b) << RESET << std::endl;
	std::cout << GREEN << "b < a: " << CYAN << (b < a) << RESET << std::endl;
	std::cout << GREEN << "a >= c: " << CYAN << (a >= c) << RESET << std::endl;
	std::cout << GREEN << "b <= a: " << CYAN << (b <= a) << RESET << std::endl;

	std::cout << YELLOW << "\n=== Arithmetic Operators ===\n" << RESET << std::endl;
	std::cout << GREEN << "\na + b: " << CYAN << (a + b) << RESET << std::endl;
	std::cout << GREEN << "\na - b: " << CYAN << (a - b) << RESET << std::endl;
	std::cout << GREEN << "\na * b: " << CYAN << (a * b) << RESET << std::endl;
	std::cout << GREEN << "\na / b: " << CYAN << (a / b) << RESET << std::endl;

	std::cout << YELLOW << "\n=== Assignment Operator ===\n" << RESET << std::endl;
	b = a;
	std::cout << GREEN << "\nAfter b = a, b: " << CYAN << b << RESET << std::endl;
	std::cout << std::endl;

	return (0);
}