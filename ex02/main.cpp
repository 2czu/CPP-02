/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacda-si <pacda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:11:57 by pacda-si          #+#    #+#             */
/*   Updated: 2025/05/25 20:23:02 by pacda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a(42.42f);
	Fixed b(10);
	Fixed c(a);

	std::cout << YELLOW << "\n=== Fixed Point Tests ===\n" << RESET << std::endl;
	std::cout << GREEN << "a: " << CYAN << a << RESET << " | " << GREEN << "int: " << CYAN << a.toInt() << RESET << " | " << GREEN << "float: " << CYAN << a.toFloat() << RESET << std::endl;
	std::cout << GREEN << "b: " << CYAN << b << RESET << " | " << GREEN << "int: " << CYAN << b.toInt() << RESET << " | " << GREEN << "float: " << CYAN << b.toFloat() << RESET << std::endl;
	std::cout << GREEN << "c: " << CYAN << c << RESET << " | " << GREEN << "int: " << CYAN << c.toInt() << RESET << " | " << GREEN << "float: " << CYAN << c.toFloat() << RESET << std::endl;
	std::cout << std::endl;

	b = a;
	std::cout << YELLOW << "\nAfter b = a:" << RESET << std::endl;
	std::cout << GREEN << "b: " << CYAN << b << RESET << " | " << GREEN << "int: " << CYAN << b.toInt() << RESET << " | " << GREEN << "float: " << CYAN << b.toFloat() << RESET << std::endl;
	std::cout << std::endl;
	
	return (0);
}