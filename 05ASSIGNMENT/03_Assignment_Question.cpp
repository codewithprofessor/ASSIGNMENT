/*
Q3: Write a program that takes a string of characters (in character array) from the user (including 
white spaces) and then asks a single character from user. You have to count how many times that single
character appears in array.
Example:
Input: (Arrray)—Hello dear how are you?
Single character—o
Output: O appears 3 times.
*/
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[200],b;
    int i=0,count=0;
    cout<<"Enter a String\n";
    cin.getline(a,200);
    cout<<"Which Charecter You want to Search   : ";
    cin>>b;
    while(a[i]!=0)
    {
        if(a[i]==b || a[i]+32==b || a[i]-32==b)
        {
            count++;
        }
        i++;
    }
    cout<<b<<" appears "<<count<<" times.";
    return 0;
}