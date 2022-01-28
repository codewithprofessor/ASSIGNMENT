/*
Q10: Write a program that takes a character array and tells how many vowels are there and how
many consonants are there in the input.
*/
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[20];
    cout<<"Etner The String \n";
    cin.getline(a,20);
    int i=0,k=0,m=0;
    while(a[i]!=0)
    {
        if(a[i]<=90&& a[i]>=65)
        {
            // iss sy charecter small hoo jayn gay too condition kam hoo jayn gi simple
            a[i]+=32;
        }
        if(a[i]=='a' ||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u')
        {
            k++;
        }
        else if(a[i]!=32)
        {
            m++;
        }
        i++;
    }
    cout<<"Vowels are ["<<k<<"] in the String"<<endl;
    cout<<"Consonants are ["<<m<<"] in the String"<<endl;
    return 0;
}
