/*
Q3: Write a program that declares a function accepting two parameters. The first parameter is a 
floating pointer number and the second parameter is an integer. The program should multiply the 
floating-point number by itself the number of times indicated by the integer. The function should 
return the result to the ma function. The main function should ask the user for the floating point 
number and integer. It should then call the function and store the result in a variable
Finally the main function should display the returned. 
*/
#include<iostream>
using namespace std;

int function(float *a,int b)
{
    float c;
    for(int i=1;i<=b;i++)
    {
        c=*a**a;
    }
    return c;
}
int main()
{
    // code by ali
    float a;
    int b;
    cout<<"Etner the Number"<<endl;
    cin>>a;
    cout<<"Etner the Number"<<endl;
    cin>>b;
    float c=function(&a,b);
    cout<<"The Result is : "<<c;
    return 0;
}