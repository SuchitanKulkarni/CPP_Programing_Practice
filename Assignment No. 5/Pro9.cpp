/* Q9.Write a program to check how strcpy() and strlen() work. */

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	char arr[100];
	cout<<"enter the string : "<<endl;
	cin.getline(str,100);
	
	int len;
	
	len = strlen(str);
	
	cout<<"length = "<<len;
	
	strcpy(arr,str);
	
	cout<<" "<<arr;
	
	return 0;
}



