/*
Q9: Write a program that declares a structure to store income, tax rate and tax of a person. 
The program defines an array of structure to store the record of five persons. It inputs income
 and tax rate of five persons and then displays the tax payable. 
 */
#include<iostream>
#include<iomanip>
using namespace std;

struct person
{
    int income;
    float tx_rate;  //tex rate
    int result;

};

int main()
{
    // code by ali
    person a[5];
    for(int i=1;i<=5;i++)
    {
        cout<<"Etner the Income  : ";
        cin>>a[i].income;
        cout<<"Etner the Tax Rate  : ";
        cin>>a[i].tx_rate;
    }
    cout<<setw(2)<<"N0"<<setw(8)<<"Income"<<setw(6)<<"TAX"<<endl;
    for(int i=1;i<=5;i++)
    {
        a[i].result=(a[i].tx_rate/100)*a[i].income;
        cout<<setw(2)<<i<<setw(6)<<a[i].income<<setw(6)<<a[i].result<<endl;

    }

    
    return 0;
}