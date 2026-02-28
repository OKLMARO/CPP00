/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 14:04:02 by oamairi           #+#    #+#             */
/*   Updated: 2026/02/28 15:59:36 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){};

void PhoneBook::remplir_phone_book()
{
	for (size_t i = 0; i < 8; i++)
	{
		Contact contact = Contact(" ", " ", " ", i + 1, " ", " ");
		contact_list[i] = contact;
	}
}

void PhoneBook::init_phone_book()
{
	for (size_t i = 0; i < 8; i++)
	{
		Contact contact = Contact("", "", "", -1, "", "");
		contact_list[i] = contact;
	}
}

int PhoneBook::get_size()
{
	for (size_t i = 0; i < 8; i++)
	{
		if (contact_list[i].getIndex() == -1)
			return (i);
	}
	return (8);
}

void	PhoneBook::search()
{
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << "\n";
	std::cout << "---------------------------------------------" << "\n";
	for (size_t i = 0; i < get_size(); i++)
	{
		if (contact_list[i].getIndex() != -1)
		{
			std::cout << "|         " << contact_list[i].getIndex() << "|";
			if (contact_list[i].getFirstName().length() > 10)
				std::cout << contact_list[i].getFirstName().substr(0, 9) << ".|";
			else
			{
				int space = 10 - contact_list[i].getFirstName().length();
				for (size_t i = 0; i < space; i++)
				{
					std::cout << " ";
				}
				std::cout << contact_list[i].getFirstName() << "|";
			}
			if (contact_list[i].getLastName().length() > 10)
				std::cout << contact_list[i].getLastName().substr(0, 9) << ".|";
			else
			{
				int space = 10 - contact_list[i].getLastName().length();
				for (size_t i = 0; i < space; i++)
				{
					std::cout << " ";
				}
				std::cout << contact_list[i].getLastName() << "|";
			}
			if (contact_list[i].getNickname().length() > 10)
				std::cout << contact_list[i].getNickname().substr(0, 9) << ".|";
			else
			{
				int space = 10 - contact_list[i].getNickname().length();
				for (size_t i = 0; i < space; i++)
				{
					std::cout << " ";
				}
				std::cout << contact_list[i].getNickname() << "|";
			}
			std::cout << "\n";
		}
	}
	std::string index;
	std::cout << "Enter Index for more information: ";
	if (!std::getline(std::cin, index))
		return ;
	if (atoi(index.c_str()) > 8 || atoi(index.c_str()) <= 0)
		return ;
	else
	{
		for (size_t i = 0; i < get_size(); i++)
		{
			if (atoi(index.c_str()) == contact_list[i].getIndex())
			{
				std::cout << "Index: " << contact_list[i].getIndex() << "\n";
				std::cout << "First Name: " << contact_list[i].getFirstName() << "\n";
				std::cout << "Last Name: " << contact_list[i].getLastName() << "\n";
				std::cout << "Nickname: " << contact_list[i].getNickname() << "\n";
				std::cout << "Secret: " << contact_list[i].getSecret() << "\n";
			}
		}
	}
}

void PhoneBook::add_user()
{
	std::string Secret;
	std::string	Nickname;
	std::string	LastName;
	std::string	FirstName;
	std::string	NumberPhone;

	std::cout << "Enter Nickname: ";
	if (!std::getline(std::cin, Nickname))
		return ;
	std::cout << "Enter Last Name: ";
	if (!std::getline(std::cin, LastName))
		return ;
	std::cout << "Enter First Name: ";
	if (!std::getline(std::cin, FirstName))
		return ;
	std::cout << "Enter Number Phone: ";
	if (!std::getline(std::cin, NumberPhone))
		return ;
	std::cout << "Enter Secret: ";
	if (!std::getline(std::cin, Secret))
		return ;
	if (get_size() < 8)
	{
		Contact contact = Contact(LastName, FirstName, NumberPhone, get_size() + 1, Nickname, Secret);
		contact_list[get_size()] = contact;
	}
	else
	{
		Contact contact = Contact(LastName, FirstName, NumberPhone, 8, Nickname, Secret);
		for (size_t i = 0; i < 8; i++)
		{
			if (contact_list[i].getIndex() == 1)
				contact_list[i] = contact;
			else
				contact_list[i].setIndex(contact_list[i].getIndex() - 1);
		}
	}
}

PhoneBook::~PhoneBook(){};
