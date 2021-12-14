/*
Q6: Write a program that reads the positive integer up to 6 digits from user and print the following
 sequence for that integer.
      1
     12
    123
   1234
for input 1234 and output changes for other inputs. Like for 24567 output should be as,
      2
     24
    245
   2456
  24567

*/

#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int a;
    cout<<"Enter the integer upto 6\n";
    cin>>a;
    if(a<=6)
    {
    for(int i=1;i<=a;i++)
    {
        for(int j=a-1;j>=i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<k;
        }
         cout<<endl;
    
    }
    }
    // else 
    // cout<<"enter the number less then or equal to 6";
    return 0;
}