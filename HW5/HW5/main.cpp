#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Vector.hpp"
#include "Account.hpp"
using namespace std;

// Rewrote to use a generic type
template<typename T>
int linearSearch(T list[], T key, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (key == list[i])
            return i;
    }
    return -1;
    
}

// Sort an array
template <typename T>
bool isSorted(const T list[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (list[i] > list[i + 1])
            return false;
    }
    
    return true;
}

// Shuffle a vector
template<typename T>
void shuffle(vector<T>& v)
{
    srand(time(0));
    for (int i = 0; i < v.size(); i++)
    {
        int index = rand() % v.size();
        T temp = v[index];
        v[index] = v[i];
        v[i] = temp;
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
}

int main()
{
    // 12.2
    // Made arrays and put numbers and strings in them
    int list1[] = {1, 4, 7, 2, 5, -3, 6, 2};
    double list2[] = {1.5, 5.7, 3.5, -6.3, 8.3, 4.9, 2.7, -9.3};
    string list3[] = {"Tree", "Bush", "Dog", "Car", "Cat"};
    // Check to see if they are sorted
    cout << linearSearch(list1, 4, 8) << endl;
    cout << linearSearch(list2, -5.7, 8) << endl;
    cout << linearSearch(list3, string("Dog"), 5) << endl;
    
    // 12.4
    // Made arrays and put variables in them
    int sort1[] = {4, 2, 5, 7, 9, 1, 13, 15};
    double sort2[] = {1.3, 4.5, 6.8, 9.5, 14.6, 15.9};
    string sort3[] = {"Alabama", "Alaska", "California", "Kansas", "Washington", "Oregon"};
    // Sort the variables in the arrays
    cout << isSorted(sort1, 7) << endl;
    cout << isSorted(sort2, 6) << endl;
    cout << isSorted(sort3, 6) << endl;
    
    // 12.8
    // See if vector functions work
    Vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    Vector<int> v2;
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    v2.pop_back();
    v2.size();
    v2.at(3);
    v2.empty();
    v2.clear();
    
    // 12.20
    // Make a vector and put numbers in it
    vector<int> intVector;
    for (int i = 0; i < 10; i++)
    {
        int a;
        cin >> a;
        intVector.push_back(a);
    }
    // Shuffle the numbers in the vector and display them
    shuffle(intVector);
    
    // 12.25
    // Make an account
    Account newAccount;
    newAccount.deposit(30);
    newAccount.deposit(40);
    newAccount.deposit(50);
    newAccount.withdraw(5);
    newAccount.withdraw(4);
    newAccount.withdraw(2);
    // Display information for the account
    cout << "Account holder is " << newAccount.getName() << endl;
    cout << "Acount interest rate is " << newAccount.getAnnualInterestRate() << "%" << endl;
    cout << "Account balance is $" << newAccount.getBalance() << endl;
    
    

}
