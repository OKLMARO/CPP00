/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 14:04:02 by oamairi           #+#    #+#             */
/*   Updated: 2026/02/25 15:24:42 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){};

void PhoneBook::init_phone_book()
{
	for (size_t i = 0; i < 8; i++)
	{
		Contact contact = Contact("", "", "", -1, "");
		contact_list[i] = contact;
	}
}

int PhoneBook::get_size()
{
	for (size_t i = 0; i < 8; i++)
	{
		if (!contact_list[i].getIndex() == -1)
			return (i);
	}
	return (8);
}



void	PhoneBook::search()
{
	std::cout << "|  Index   |First Name|Last Name | Nickname |" << "\n";
	std::cout << "---------------------------------------------" << "\n";
	for (size_t i = 0; i < get_size(); i++)
	{
		std::cout << "|    " << contact_list[i].getIndex() << "     |";
		if (contact_list[i].getFirstName())
	}
}

int PhoneBook::add_user()
{
	std::string Secret;
	std::string	Nickname;
	std::string	LastName;
	std::string	FirstName;
	std::string	NumberPhone;

	std::cout << "Enter Nickname: ";
	if (!std::getline(std::cin, Nickname))
		return (1);
	std::cout << "Enter Last Name: ";
	if (!std::getline(std::cin, LastName))
		return (1);
	std::cout << "Enter First Name: ";
	if (!std::getline(std::cin, FirstName))
		return (1);
	std::cout << "Enter Number Phone: ";
	if (!std::getline(std::cin, NumberPhone))
		return (1);
	std::cout << "Enter Secret: ";
	if (!std::getline(std::cin, Secret))
		return (1);
	if (get_size() < 8)
	{
		Contact contact = Contact(LastName, FirstName, NumberPhone, get_size() - 1, Nickname, Secret);
		contact_list[get_size()] = contact;
	}
	else
	{
		Contact contact = Contact(LastName, FirstName, NumberPhone, 7, Nickname, Secret);
		for (size_t i = 0; i < 8; i++)
		{
			if (contact_list[i].getIndex() == 0)
				contact_list[i] = contact;
			else
				contact_list[i].setIndex(contact_list[i].getIndex() - 1);
		}
	}
}

PhoneBook::~PhoneBook(){};
