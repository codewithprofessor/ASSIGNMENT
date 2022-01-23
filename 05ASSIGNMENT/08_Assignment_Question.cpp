/*
Q8: Write a program that takes a string of characters (in character array) from the user
 (assuming there are no white spaces entered) and then sort the array 
 in descending or ascending order.
*/
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[200];
    char c[200];
    int i=0;
    cout<<"Etner the String of Characters\n";
    cin.getline(a,200);
    while(a[i]!=0)
    {
        if(a[i]<=90 && a[i]>=65)
        {
            a[i]+=32;
        }
        i++;
    }
    for(int j=0;j<=i;j++)
    {
        for(int k=j+1;k<i;k++)
        {
            if(a[j]>a[k])
            {
                char b=a[j];
                a[j]=a[k];
                a[k]=b;
            }
        }
    }
    cout<<"\t\tASCEDNING ORDER IS \n"<<endl;
    cout<<a<<endl;
    for(int j=0;j<=i;j++)
    {
        for(int k=j+1;k<i;k++)
        {
            if(a[j]<a[k])
            {
                char b=a[j];
                a[j]=a[k];
                a[k]=b;
            }
        }
    }
    cout<<"\t\tDESCEDNING ORDER IS \n"<<endl;
    cout<<a<<endl;
    return 0;
}