/*
Q1: Write a program that takes a string of characters (in character array) from the user
 (assuming there are no white spaces entered) and then tells the user if the string entered is
  a palindrome or not.
Like aba, aabbaa is a palandrom, aab, babaa is not a palendrom.
*/
#include<iostream>
using namespace std;

int main()
{
    char a[200];
	bool flag = true;
	int i=0,j=0;
	cout<<"Please Enter the Stirng\n";
	cin.getline(a,200);
	while(a[i]!=0)
	i++;
	i--;
	while (j<i)
	{
	    if(a[i]==a[j])
	    {
	        i--;
	        j++;
	    }
	
	    else 
	    {
	    	flag = false;
	    	break;
	    }
	}
	if (flag==true)
	cout<<"It is palendrom"<<endl;
	else
	cout<<"It is not a palendrom"<<endl;
    return 0;
}