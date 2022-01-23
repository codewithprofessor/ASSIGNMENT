/*
Q4: Write a program that takes a string of characters (in character array) from the user (assuming 
there are no white spaces entered) and then tells the user how many characters are in the array.
Example:
Input: hellodearhowru
Output:9
*/
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[200];
    int i=0,count,sum=0;
    cout<<"Enter the String With No spaces\n";
    cin>>a;            //(assuming there are no white spaces entered)
    while(a[i]!=0)
    {
        for(int j=i+1;j<=200;j++)
        {
            count=0;
            if(a[i]==a[j])
            {
                count++;
            }
            sum+=count;
        }
        i++;
    }
    cout<<"Output "<<i-sum<<endl;
    return 0;
}