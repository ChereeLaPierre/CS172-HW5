//
//  Account.cpp
//  HW5
//
//  Created by Cheree LaPierre on /111/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

#include "Account.hpp"
#include "Transaction.hpp"
#include <iostream>
using namespace std;

Account::Account(int id1, string name1, double balance1, double annualInterestRate1)
{
    id = id1;
    name = name1;
    balance = balance1;
//    annualInterestRate = annualInterestRate1;
}


int Account::getId()
{
    return id;
}

void Account::setId(int id1)
{
    id = id1;
}

double Account::getBalance()
{
    return balance;
}

void Account::setBalance(double balance1)
{
    balance = balance1;
}

double Account::getAnnualInterestRate()
{
    return annualInterestRate * 100;
}

void Account::setAnnualInterestRate(double annualInterestRate1)
{
    annualInterestRate = annualInterestRate1;
}

int Account::getMonthlyInterestRate()       // Returns monthly interest rate
{
    return annualInterestRate / 12;
}

int Account::withdraw(double amount)        // Withdraws specified amount
{
    double newTotal;
    newTotal = balance - amount;
    balance = newTotal;
    return balance;
}

int Account::deposit(double amount)         // Deposits specified amount
{
    double newTotal;
    newTotal = balance + amount;
    balance = newTotal;
    return balance;
}

string Account::getName()
{
    return name;
}







