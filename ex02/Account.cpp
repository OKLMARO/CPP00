/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:00:51 by oamairi           #+#    #+#             */
/*   Updated: 2026/02/26 14:55:59 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Account.hpp"

Account::Account(int initial_deposit)
{
	this->_nbDeposits = initial_deposit;
}

int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void Account::_displayTimestamp(void)
{
	time_t time = std::time(NULL);
	tm *local = std::localtime(&time);
	std::cout << "[" << local->tm_year + 1900 << local->tm_mon + 1 << local->tm_mday << "_" << local->tm_hour << local->tm_min << local-> tm_sec << " ";
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _totalAmount;
}

Account::~Account(){};
