/*
Q3: Write a program that will reads an integer and print Fibonacci series up to that number.
 Like for input 100 Fibonacci will be: 0,1,1,2,3,5,8,13,21,34,55, 89
 */

#include<iostream>
using namespace std;

int main()
{
    // code by ali
    long b;
    cout<<"Enter the integer\n";
    cin>>b;
    double long f1=0,f2=1,ans=0;
    
    cout<<"input 100 Fibonacci will be: 0, 1, ";
    for(int i=0;i<=b-1;i++)
    {
        ans=f1+f2;
        f1=f2;
        f2=ans;
        if(ans<=b)
        {
            cout<<ans<<", ";
        }
    }
    
    return 0;
}