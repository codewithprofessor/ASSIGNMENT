/*
Q4: Write a program that will reads an integer and print Fibonacci series in reverse order 
from that number.
 Like for input 100 reverse Fibonacci will be :89, 55, 34, 21,13, 8, 5, 3, 2, 1, 1, 0
*/

#include<iostream>
using namespace std;

int main()
{
    // code by ali
    long j;
    cout<<"Enter the Number \n";
    cin>>j;
    double long i[j];
    i[0]=0;
    i[1]=1;
    for(long k=2;k<j;k++)
    {
        i[k]=i[k-2]+i[k-1];
    }
    cout<<"for input "<<j<<" reverse Fibonacci will be :";
    for(long k=j-1;k>=0;k--)
    {
        if(i[k]<=j)
        cout<<i[k]<<", ";
    }

    return 0;
}
