/*
Q2: Write a program that reads n integers and prints the smallest number between them.
 If the input is 9999 it should display the smallest number that has been entered and exits
  form program, else it should ask for more inputs.
*/

#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int n,a[n],min=0;
    cout<<"How much number you want to chk\n";
    cin>>n;
    cout<<"Enter the numbers\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==9999)
        {
            break;
        }
    }
    min = a[0];
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
        min=a[i];
        }
    }
    cout<<"The Smallest Number is : "<<min<<endl;
    
    
    return 0;
}
