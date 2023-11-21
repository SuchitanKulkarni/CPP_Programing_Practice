/* Q11.Scan 2 strings from user.Swap them. */

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	char arr[100];
	char temp[100];
	
	cout<<"enter the string 1 : "<<endl;
	cin.getline(str,100);
	
	cout<<"enter the string 2 :"<<endl;
	cin.getline(arr,100);
	
	strcpy(temp,str);
	strcpy(str,arr);
	strcpy(arr,temp);
	
	cout<<str<<" "<<arr;
	
	return 0;
	
}

