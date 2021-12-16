/*
Q8: Write a program that reads positive integer less than 10 and calculate the factorial 
of that given number.
*/

#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int a,f=1;
    cout<<"Enter the Number less then 10\n";
    cin>>a;
    if(a<10)
    {
    for(int i=1;i<=a;i++)
    {
        f*=i;
    }
    cout<<f<<endl;
    }
    // else 
    // cout<<"enter the number less then or equal to 6";
    return 0;
}