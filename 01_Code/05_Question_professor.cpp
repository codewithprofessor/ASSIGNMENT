/*
Q5: Write a program that reads the positive integer up to 6 digits from user and print the
 following sequence for that integer:
1
12
123
1234
Above output is for input 1234 
output changes for other inputs: Like for 24567 output should be as,
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
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        cout<<j;
        cout<<endl;
    }
    return 0;
}