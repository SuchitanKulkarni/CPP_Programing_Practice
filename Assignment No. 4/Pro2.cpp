/* Q2.Scan 2 strings from user.Print them. */

#include<iostream>
using namespace std;

int main()
{
	char str1[100];
	char str2[100];
	
	cout<<"Enter the 1st string : "<<endl;
	cin.getline(str1,100);
	
	cout<<"Enter the 2nd string : "<<endl;
	cin.getline(str2,100);
	
	cout<<str1<<endl<<str2;
	
	return 0;
 } 
