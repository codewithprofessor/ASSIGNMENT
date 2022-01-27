/*
Q10: Write a program that declares a structure Book to store BookID, book name and price. It 
declares another structure Order that contains OrderID and an array of Book of length 5
. The program should define a variable of type Order and input the values from the user.
 The program finally displays the values.
 */
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct  book
{
    int book_id;
    string book_name;
    int price;
};
struct order
{
    int order_id;
    book a[5];
};


int main()
{
    // code by ali
    order b;
    cout<<"Enter Order id  : ";
    cin>>b.order_id;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the Book ID : ";
        cin>>b.a[i].book_id;
        cout<<"Enter The Name of Book : ";
        cin.ignore();
        getline(cin,b.a[i].book_name);
        cout<<"Etner the Price of Book : ";
        cin>>b.a[i].price;

    }
    cout<<"USER ID :"<<b.order_id<<endl;
    cout<<setw(15)<<"BOOK NAME  "<<setw(8)<<"ID   "<<setw(7)<<"PRICE "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<setw(9)<<b.a[i].book_name<<setw(8)<<b.a[i].book_id<<setw(7)<<b.a[i].price<<endl;
    }

    
    return 0;
}

