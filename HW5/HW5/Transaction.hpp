//
//  Transaction.hpp
//  HW5
//
//  Created by Cheree LaPierre on /111/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

#ifndef Transaction_hpp
#define Transaction_hpp

#include <stdio.h>
#include <string>
using namespace std;
class Transaction
{
private:
    int date;
    char type;
    double amount;
    double balance;
    string description;
    
public:
    Transaction(char type, double amount, double balance, string description);
};

#endif /* Transaction_hpp */
