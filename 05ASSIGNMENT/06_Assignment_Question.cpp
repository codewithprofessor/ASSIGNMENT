/*
Q6: Write a program that takes a string of characters (in character array) from the user (including 
white spaces) and then tells the user how many tripples (when three similar (not four) character 
appears at contiguous location) in the array.
Example:
Input:  Hellllo its ieee conference. Seee it. A9999accc.
Output: 3 triples are in array
Note: llll and 9999 is not included in triples because there are four similar characters at contiguous
 location, eee in ieee, eee in seee and ccc in a9999accc are triples.
 */
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[200];
    int i=0,count=0;
    cout<<"Enter the String "<<endl;
    cin.getline(a,200);
    while(a[i]!=0)
    {
        if(a[i]==a[i+1] && a[i+1]==a[i+2] && a[i+2]!=a[i+3] && a[i-1]!=a[i])
        {
            count++;
        }
        i++;
    }
    cout<<"Output: "<<count<<" triples are in array"<<endl;   
    return 0;
}