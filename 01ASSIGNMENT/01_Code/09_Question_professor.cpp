/*
Q9: Write a program that reads two positive integers and prints all integers between those two
 integers.
Example: for input 5 and 12 output should be as:
The integer numbers between 5 and 12 are 6, 7, 8, 9, 10, and 11.
Example2: for input 7 and 7 output should be as:
There is no integer number between 7 and 7
*/


#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int a,b;
    cout<<"Enter the two Integer\n";
    cin>>a>>b;
    if(a>b)
    {
         cout<<"The integer numbers between "<<b <<" and " <<a <<" are ";
        for(int i=b;i<=a;i++)
        {
          cout <<i<<", ";
        }
    }

    else if(a<b)
    {
        cout<<"The integer numbers between "<<a <<" and " <<b <<" are ";
        for(int i=a;i<=b;i++)
        {
            cout<<i<<", ";
        }
    }

    else
    cout<<"There is no integer number between "<<a <<" and "<<b;
    
    return 0;
}

