/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:18:12 by oamairi           #+#    #+#             */
/*   Updated: 2026/02/26 11:59:04 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string input;
	PhoneBook phone_book;

	phone_book = PhoneBook();
	phone_book.init_phone_book();
	while (1)
	{
		std::cout << "The program only accepts ADD, SEARCH and EXIT: ";
		if (!std::getline(std::cin, input))
			break;
		if (input.compare("EXIT") == 0)
			break;
		else if (input.compare("ADD") == 0)
			phone_book.add_user();
		else if (input.compare("EXIT") == 0)
			break;
		else if (input.compare("SEARCH") == 0)
			phone_book.search();
	}
}
