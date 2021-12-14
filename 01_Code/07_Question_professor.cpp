/*
Q7: Write a program that reads an integer from user and prints all even numbers up to
 that number as well as print all odd numbers after printing the even numbers.
(even and odd numbers should be on separate lines). 
Example: for input 12 output should be as:
Even Numbers: 0, 2, 4, 6, 8, 10, and 12.
Odd Numbers: 1, 3, 5, 7, 9, and 11.
*/

#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int i;
    cout<<"Enter the integer\n";
    cin>>i;
    cout<<"Even Numbers: ";
    for(int j=1;j<=i;j++)
    {
        if(j%2==0)
        {
            cout<<j<<", ";
        }
    }

     cout<<"\nOdd Numbers : ";
    for(int j=1;j<=i;j++)
    {
        if(j%2!=0)
        {
            cout<<j<<", ";
        }
    }
    return 0;
}
