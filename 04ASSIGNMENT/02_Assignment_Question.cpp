/*
Q2:  Write a program that creates three arrays; two of size 10 and third of size 20. Your program
 should read 20 integers in first two arrays having size 10. After reading integers from user;
  program should store entered integers in third array in way that even number should be in
   first and then odd integers.
   */
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int a[10],b[10],c[20],k=0;
    cout<<"Etner the 20 Values\n";
    for(int i=0;i<10;i++)
    {
        // code by ali
        cin>>a[i];
        cin>>b[i];
        if(a[i]%2==0)
        {
            c[k]=a[i];
            k++;
        }
        if(b[i]%2==0)
        {
            c[k]=b[i];
            k++;
        }

    }
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==1)
        {
            c[k]=a[i];
            k++;
        }
        if(b[i]%2==1)
        {
            c[k]=b[i];
            k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<c[i]<<"  ";
    }
    return 0;
}