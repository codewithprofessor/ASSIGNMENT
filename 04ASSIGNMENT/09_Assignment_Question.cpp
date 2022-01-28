/*
Q9: Declare a character array of size 20. Input the character array from the user. Count the total 
number of characters stored in the array. Display the result.
*/
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[20];
    cout<<"Etner the 20 characters \n";
    cin.getline(a,20);
    int i=0,m=0;
    while(a[i]!=0)
    {
        if(a[i]!=32)
        {
            m++;
        }
        i++;
    }
    cout<<"The Total Characters in the Array is : "<<m;
    return 0;
}