/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/10 13:51:16 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/10 15:45:10 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int initial_deposit)
{
    return;
}

Account::Account(void)
{
    return;
}

Account::~Account(void)
{
    return;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

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

static void	Account::displayAccountsInfos( void )
{
    display total_accounts;total_amounts;total_deposits;total_withdrawals 
    display accounts (size of accounts) in format:
    [timestamp] index:i;amount:amount
}

// void    Account::makeDeposit( int deposit )
// {

// }

// bool	Account::makeWithdrawal( int withdrawal )
// {
    
// }

// int		Account::checkAmount( void ) const
// {
    
// }

// void	Account::displayStatus( void ) const
// {
    
// }

// static void	Account::_displayTimestamp( void )
// {
    
// }