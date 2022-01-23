/*
Q7: Write a program that takes a string of alphabets (in character array) from the user 
(assuming there are no white spaces entered) and then convert all the alphabets into lower or
 upper case without using any built in function.
 */
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[200];
    int i=0;
    cout<<"Etner the String\n";
    cin.getline(a,200);
    while(a[i]!=0)
    {
        if(a[i]<=122 && a[i]>=97)
        {
            a[i]-=32;
        }
        i++;
    }
    cout<<"\nUpercase \n"<<a<<endl;
    i=0;
    while(a[i]!=0)
    {  
        if(a[i]<=90 && a[i]>=65)
        {
            a[i]+=32;
        }
        i++;
    }
    cout<<"\nLowercase \n"<<a<<endl;
    return 0;
}