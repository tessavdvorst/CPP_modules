/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/10 13:51:16 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/11 12:24:13 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_totalAmount += initial_deposit;
    this->_accountIndex = this->_nbAccounts;
    
    _displayTimestamp();
    std::cout << "index:" << this->_nbAccounts << ";";
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "created" << std::endl;
    
    this->_nbAccounts++;
}

Account::Account(void)
{
    return;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "closed" << std::endl;
}


int	Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
   _displayTimestamp();
   std::cout << "accounts:" << getNbAccounts() << ";";
   std::cout << "total:" << getTotalAmount() << ";";
   std::cout << "deposits:" << getNbDeposits() << ";";
   std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void    Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << checkAmount() << ";";
    std::cout << "deposit:" << deposit << ";";
    
    this->_amount += deposit;
    std::cout << "amount:" << checkAmount() << ";";
    this->_nbDeposits++;
    
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
    this->_totalAmount += deposit;
    this->_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << checkAmount() << ";";
    
    std::cout << "withdrawal:";
    if (withdrawal > checkAmount())
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    std::cout << withdrawal << ";";
    this->_amount -= withdrawal;
    std::cout << "amount:" << checkAmount() << ";";
    
    this->_nbWithdrawals++;
    std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    this->_totalAmount -= withdrawal;
    this->_totalNbWithdrawals++;
    return (true);
}

int		Account::checkAmount( void ) const
{
    return (this->_amount);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
    time_t current_time = time(NULL);
    tm *local_time = localtime(&current_time);

    std::cout << "[" << 1900 + local_time->tm_year;
    std::cout << 1 + local_time->tm_mon;
    std::cout << local_time->tm_mday << "_";
    std::cout << 1 + local_time->tm_hour;
    std::cout << 1 + local_time->tm_min;
    std::cout << 1 + local_time->tm_sec << "] ";
}