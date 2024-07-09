
#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <sstream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// getter function for the static variables related to Account class
int	Account::getNbAccounts( void )		{ return (_nbAccounts); };
int	Account::getTotalAmount( void )		{ return (_totalAmount); };
int	Account::getNbDeposits( void )		{ return (_totalNbDeposits); };
int	Account::getNbWithdrawals( void )	{ return (_totalNbWithdrawals); };

void	Account::_displayTimestamp( void )
{
	// getting time since last epoch
	std::time_t			now = std::time(NULL);
	// converting time in a tm struct for easy acces and local time
	std::tm				*localTime = localtime(&now);
	// a string stream to construct the result piece by piece
	std::stringstream	ss;

	// using setw() to set a fixed width and setfill() to have the default filler be '0'
	ss	<< '['	<< std::setw(4) << std::setfill('0') << localTime->tm_year + 1900
				<< std::setw(2) << std::setfill('0') << localTime->tm_mday
				<< std::setw(2) << std::setfill('0') << localTime->tm_mon + 1
				<< '_'
				<< std::setw(2) << std::setfill('0') << localTime->tm_hour
				<< std::setw(2) << std::setfill('0') << localTime->tm_min
				<< std::setw(2) << std::setfill('0') << localTime->tm_sec << "] ";
	std::cout << ss.str();
}

Account::Account( int initial_deposit )
{
	_displayTimestamp();
	std::cout	<< "index:" << _nbAccounts << ';' \
				<< "amount:" << initial_deposit << ';' \
				<< "created" << std::endl;

	// initializing account status
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	// updating total stats
	_totalAmount += initial_deposit;
	_nbAccounts++;
};

Account::~Account( void )
{
	_displayTimestamp();
	std::cout	<< "index:" << _nbAccounts << ';' \
				<< "amount:" << _amount << ';' \
				<< "closed" << std::endl;
};

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();

	std::cout	<< "accounts:" << _nbAccounts << ';' \
				<< "total:" << _totalAmount << ';' \
				<< "deposits:" << _totalNbDeposits << ';' \
				<< "withdrawals:" << _totalNbWithdrawals << std::endl;
};

void	Account::displayStatus( void ) const
{
	_displayTimestamp();

	std::cout	<< "index:" << _accountIndex << ';' \
				<< "amount:" << _amount << ';' \
				<< "deposits:" << _nbDeposits << ';' \
				<< "withdrawals:" << _nbWithdrawals << std::endl;
};

bool	Account::makeWithdrawal( int withDrawal )
{
	_displayTimestamp();

	std::cout		<< "p_amount:" << _amount << ';';
	if (_amount - withDrawal < 0)
	{
		std::cout	<< "withdrawal:" << "refused" << std::endl;
		return (false);
	}

	// updating account status
	_nbWithdrawals++;
	_amount -= withDrawal;

	// updating total status
	_totalAmount -= withDrawal;
	_totalNbWithdrawals++;

	std::cout	<< "withdrawal:" << withDrawal << ';' \
				<< "amount:" << _amount \
				<< "nb_withdrawals:" << _nbWithdrawals << std::endl;

	return (true);
};

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();

	// updating account status
	_nbDeposits++;
	_amount += deposit;

	// updating total status
	_totalNbDeposits++;
	_totalAmount += deposit;

	std::cout	<< "index:" << _accountIndex << ';' \
				<< "p_amount:" << _amount - deposit << ';' \
				<< "deposit:" << deposit << ';' \
				<< "amount:" << _amount << ';' \
				<< "nb_deposits:" << _nbDeposits << std::endl;
};
