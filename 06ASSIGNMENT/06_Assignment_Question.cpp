/*
Q6: Write a program that inputs five integers in a one-dimensional array and passes the array to
 a function. The function finds the minimum value in the array and returns to main function where 
 it is displayed. 
 */
#include<iostream>
using namespace std;

int function(int *a,int b)
{
    int min=0;
    min=a[0];
    for(int i=0;i<b;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    return min;
}
int main()
{
    // code by ali
    int a[5];
    cout<<"Etner the 5 values\n";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int min=function(a,5);
    cout<<"The Minimum Value is : "<<min<<endl;

    return 0;
}