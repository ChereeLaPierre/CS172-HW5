//
//  Account.hpp
//  HW5
//
//  Created by Cheree LaPierre on /111/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
class Account
{
private:
    int id;                             // Account name
    double balance;                     // Account balance
    double annualInterestRate;          // Stores current interest rate
    
    string name;
    
public:
    Account()
    {
        id = 1122;
        balance = 1000;
        annualInterestRate = 0.015;
        name = "George";
    }
    Account(int account1, string name1, double balance1, double annualInterestRate1);
    int getId();
    void setId(int newId);
    double getBalance();
    void setBalance(double newBalance);
    double getAnnualInterestRate();
    void setAnnualInterestRate(double interestRate);
    int getMonthlyInterestRate();       // Returns monthly interest rate
    int withdraw(double amount);        // Withdraws specified amount
    int deposit(double amount);         // Deposits specified amount
    string getName();                   // Returns name of customer
    
//    vector<int> transaction
//    {
//        
//    }
    
    
};

#endif /* Account_hpp */
