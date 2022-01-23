/*
Q10: Write a program that reads a character and an integer n from user and prints entered character 
n times.
*/
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a;
    int n;
    cout<<"Etner the Character : ";
    cin>>a;
    cout<<"Enter the Integer : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
    }
    return 0;
}