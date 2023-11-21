/* 4.Scan 2 strings from user.swap them.*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	char arr[100];
	
	cout<<"enter the string 1 : "<<endl;
	cin.getline(str,100);
	
	cout<<"enter the string 2 : "<<endl;
	cin.getline(arr,100);
	
	
	char temp[100];
	
	strcpy(temp,str);
	strcpy(str,arr);
	strcpy(arr,temp);
	
	cout<<"string 1 = "<<str<<"  string 2 = "<<arr;
	
	return 0;  
}
