/*
Q4: Write a program that reads 10 integers from user and then display the numbers in ascending order.
*/
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int a[10];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"Accending Order is :";
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}