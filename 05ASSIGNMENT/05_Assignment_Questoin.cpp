/*
Q5: Write a program that takes a string of characters (in character array) from the user (including 
white spaces) and then counts total no. of words in array. 
Example:
Input: Hello it’s my array program
Output: 5
*/
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[200];
    int i=0,count=0;
    cout<<"Enter the String\n";\
    cin.getline(a,200);
    while (a[i]!=0)
    {
        if(a[i]==32 && a[i-1]!=32)
        {
            count++;
        }
        i++;
    }
    cout<<"Output : "<<count+1;
    
    return 0;
}