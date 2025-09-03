/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 19:18:19 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/09/03 20:48:01 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

// Initialize static members //

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// Getters //

int	Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}

// Method //

void	Account::_displayTimestamp(void)
{
	std::time_t	now = std::time(NULL);
	std::tm		*ltm = std::localtime(&now);
	
	std::cout << "[" << 1900 + ltm->tm_year
		<< std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon
		<< std::setw(2) << std::setfill('0') << ltm->tm_mday << "_"
		<< std::setw(2) << std::setfill('0') << ltm->tm_hour
		<< std::setw(2) << std::setfill('0') << ltm->tm_min
		<< std::setw(2) << std::setfill('0') << ltm->tm_sec << "] ";
}

// Constructor //

Account::Account(int initial_deposit): _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";created" << std::endl;
}

// Destructor //

Account::~Account()
{
	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";closed" << std::endl;
}

// Public functions //

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout	<< "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposit:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals
				<< std::endl;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposit:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals
				<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";deposit:" << deposit;

	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;

	std::cout	<< ";amount:" << _amount
				<< "nb_deposits:" << _nbDeposits
				<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return false;
	}

	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	std::cout	<< withdrawal << ";amount:" << _amount
				<< ";nb_withdrawals:" << _nbWithdrawals
				<< std::endl;
	
	return true;
}

int	Account::checkAmount() const
{
	return (this->_amount);
}
