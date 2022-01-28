/*
Q8: Declare two character arrays of size 15. Input first array from the user.
 Copy the contents of the first array into the second.
*/
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[15],b[15];
    cout<<"Etner the String of 15 Charexter \n";
    cin.getline(a,15);
    for(int i=0;i<15;i++)
    {
        b[i]=a[i];
    }
    cout<<b;
    return 0;
}