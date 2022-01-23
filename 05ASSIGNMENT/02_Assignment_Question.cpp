/*
Q2: Write a program that takes a string of characters (in character array) from the user 
(including white spaces) and then tells the user how many doubles (when two similar (not three) 
 character appears at contiguous location) in the array.
Example:
Input:  Hello its ieee conference. See it. A99accc.
Output: 3 doubles are in array
Note: ieee and ccc is not included in doubles because there are three similar characters at
 contiguous location, ll in hello, ee in see and 99 in a99accc are doubles.
 */
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[200];
    int i=0,count=0;
    cout<<"Etner the String \n";
    cin.getline(a,200);
    while(a[i]!=0)
    {
        if(a[i]==a[i+1]&&a[i+1]!=a[i+2]&&a[i-1]!=a[i])
        {
            count++;
        }
        i++;
    }
    cout<<count<<" doubles are in array"<<endl;
    return 0;
}