/*
Q5: Write a program that reads 10 integers from user. Your program should display the maximum,
minimum and average of the entered numbers.  Do this program by using array as well as 
without array?  
*/
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int a[10],max=0,min=0;
    int sum=0;
    cout<<"Etner the 10 Values\n";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sum=sum/10;
    max=a[0];
    min=a[0];
    for(int i=1;i<10;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    cout<<"The Maximum Value is : "<<max<<endl;
    cout<<"The Minimum Value is : "<<min<<endl;
    cout<<"The Avg Value is : "<<sum<<endl;
    return 0;
}