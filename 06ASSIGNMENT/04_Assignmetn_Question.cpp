/*
Q4: Write a function that accepts a salary and returns the tax according to following rules:

No tax for first Rs.1000
5% for second Rs.1000 4% for third Rs.1000
3% for remain untaxed salary 

For example, if the salary is Rs.4000, then the tax is Rs. 120.
*/
#include<iostream>
using namespace std;

int function()
{
    int salary,r;
    cout<<"Etner the Salary\n";
    cin>>salary;
    if(salary>=1 && salary<=1000)
    {
        r=0;
    }
    if(salary>1000 && salary<=2000)
    {
        r=salary*0.05;
    }
    if(salary>2000 && salary<=3000)
    {
        r=salary*0.04;
    }
    if(salary>3000)
    {
        r=salary*0.03;
    }
    return r;

}
int main()
{
    // code by ali
    int m=function();
    cout<<"The Tax Is  : "<<m;
    return 0;
}