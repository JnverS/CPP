#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount= 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) {
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void) {
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void) {
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
    return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout  << "accounts:" << getNbAccounts() << ";total:" << _totalAmount << ";deposits:" << getNbDeposits();
    std::cout  << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:"  << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";deposit:" << deposit;
    _amount += deposit;
    _nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    std::cout  << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout	<< "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawals:";
    if (this->_amount - withdrawal < 0)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals += 1;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals += 1;
    std::cout	<< withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (true);
}

int Account::checkAmount(void) const {
    return _amount;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits;
    std::cout  << ";withdrawals:" << _nbWithdrawals << std::endl;
}

Account::Account(int initial_deposit) :
            _accountIndex(Account::_nbAccounts),
            _amount(initial_deposit),
            _nbDeposits(0),
            _nbWithdrawals(0) {
    _totalAmount += initial_deposit;
    _nbAccounts++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    return ;
}

Account::~Account(void) {
    _displayTimestamp();
    std::cout <<  "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
    return ;
}

void Account::_displayTimestamp(void) {
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::cout 	<< "[" << (now->tm_year + 1900);
    std::cout	<< std::setfill ('0') << std::setw (2) << (now->tm_mon + 1);
    std::cout	<< std::setfill ('0') << std::setw (2) << (now->tm_mday);
    std::cout	<< "_";
    std::cout	<< std::setfill ('0') << std::setw (2) << (now->tm_hour);
    std::cout	<< std::setfill ('0') << std::setw (2) << (now->tm_min);
    std::cout	<< std::setfill ('0') << std::setw (2) << (now->tm_sec);
    std::cout	<< "] ";
}
