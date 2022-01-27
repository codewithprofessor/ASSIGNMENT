/*
Q1: Write a program that enters a number from the user and displays Fibonacci 
numbers from 1 to given number using function.
*/
#include<iostream>
using namespace std;

void function()
{
    int n,f=0,s=1;          //f == first number //s is second number
    cout<<"Enter the Number\n";
    cin>>n;
    cout<<"The Fibonacci Series is 0, 1,";
    for(int i=0;i<n;i++)
    {
        long  sum=f+s;         //i use a long because it create larg memory the int
        f=s;
        s=sum;
        if(sum<=n)
        {
            cout<<sum<<", ";
        }
        else                   //it is important
        break;
    }

}
int main()
{
    // code by ali
    function();
    return 0;
}