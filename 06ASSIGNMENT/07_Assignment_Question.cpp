/*
Q7: Write a program that inputs the name and population of two cities in structure variables and 
passes them to a function. The function displays the record of the city that has less population.
*/
#include<iostream>
#include<string>
using namespace std;

struct country_info
{
    string name;
    long population;
};
void function(country_info *a,int b)
{
    if(a[0].population<a[1].population)
    {
        cout<<a[0].name<<" Has Less papulation"<<endl;
    }
    else 
    cout<<a[1].name<<" has Less papulation"<<endl;

};

int main()
{
    // code by ali
    country_info a[2];
    for(int i=0;i<2;i++)
    {
        cout<<"Etner the Country Name : ";
        cin.ignore();
        getline(cin,a[i].name);
        cout<<"Etenr the Papulation  : ";
        cin>>a[i].population;
    }
    function(a,2);
    return 0;
}