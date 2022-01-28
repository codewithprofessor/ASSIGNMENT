/*
Q7: Declare a character array of size 20. Input the character array from the user.
Take a character from the user and display the location(s) of that character in the array.
*/
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[20],b;
    cout<<"Etner the Array of 20 Charecter\n";
    cin.getline(a,20);
    cout<<"Which chareter's Location You want to find  : ";
    cin>>b;
    int i=0;
    while(a[i]!=b)
    {
        i++;
    }
    i++;
    cout<<"The Charecter ("<<b<<") on position "<<i;
    return 0;
}