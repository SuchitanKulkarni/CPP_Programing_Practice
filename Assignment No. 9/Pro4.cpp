/* Q4.Scan 2 strings from user.Check if they are equal or not.
Write whole code in main() only.*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	char arr[90];
	
	cout<<"enter the string 1 : "<<endl;
	cin.getline(str,100);
	
	cout<<"enter the string 2 : "<<endl;
	cin.getline(arr,90);
	
	int res = strcmp(str,arr);
	
	if(res ==0)
	{
		cout<<"both are equal";
	}
	else
	{
		cout<<"not equal ";
	}
	
	return 0;
}
