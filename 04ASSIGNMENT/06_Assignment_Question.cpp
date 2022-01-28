/*
Q6: Declare a character array of size 20. Input the character array from the user.
After the input, display the array.
*/
#include<iostream>
using namespace std;
int main()
{
    // code by ali
    char a[20];
    cout<<"Etner the 20 charecter\n";
    cin.getline(a,20);
    cout<<a;
    return 0;
}