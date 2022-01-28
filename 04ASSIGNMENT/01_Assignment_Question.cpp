/*
Q1: Write a program that creates an array of 10 integers takes the input from   the user and find the
 sum of positive odd numbers and the product of positive even numbers.
 */
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int a[10],sum=0,pro=1;
    cout<<"Etner the 10 Values\n";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0 && a[i]>0)
        {
            sum+=a[i];
        }
        else if(a[i]%2==0 && a[i]>0)     //we also can use just if(Condition)
        {
            pro*=a[i];
        }
    }
    cout<<"Sum of Odd positive integer  :"<<sum<<endl;
    cout<<"product of Even positive integer  :"<<pro<<endl;
    return 0;
}