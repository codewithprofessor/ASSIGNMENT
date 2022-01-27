/*
Q2: Write a program that inputs two numbers in main function and passes function. 
The function displays first number them a raised to power of second number. 
For example, if the user enters 2 and 4, it displays 16. 
*/
#include<iostream>
using namespace std;

void function(int f,int p)
{
    int pro=1;
    for(int i=1;i<=p;i++)
    {
        pro=pro*f;
    }
    cout<<pro;
}

int main()
{
    // code  by ali
    int f,p;
    cout<<"Etner the 1st Number : ";
    cin>>f;
    cout<<"Etner the 2st Number : ";
    cin>>p;
    function(f,p);
    return 0;
}