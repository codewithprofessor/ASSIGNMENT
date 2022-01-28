/*
Q10: Write a program that reads 10 integers and store these in array then find the maximum number in
 array.
*/
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int a[10];
    cout<<"Enter the 10 Values\n";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<10;i++)
    {
        if(a[0] < a[i])
        {
            a[0]=a[i];
        }
    }
    cout<<"The maximum Number is : "<<a[0];
    return 0;
}