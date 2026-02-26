/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:02:28 by oamairi           #+#    #+#             */
/*   Updated: 2026/02/26 11:29:28 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){};

Contact::Contact(std::string Last, std::string First, std::string Number, int index, std::string Nickname, std::string Secret)
{
	this->LastName		= Last;
	this->index			= index;
	this->FirstName		= First;
	this->Secret		= Secret;
	this->NumberPhone	= Number;
	this->Nickname		= Nickname;
}

int	Contact::getIndex()
{
	return Contact::index;
}

void	Contact::setIndex(int index)
{
	this->index = index;
}

std::string Contact::getNickname()
{
	return Contact::Nickname;
}

std::string Contact::getLastName()
{
	return Contact::LastName;
}

std::string Contact::getFirstName()
{
	return Contact::FirstName;
}

std::string Contact::getNumberPhone()
{
	return Contact::NumberPhone;
}

std::string Contact::getSecret()
{
	return Contact::Secret;
}

Contact::~Contact(){};
