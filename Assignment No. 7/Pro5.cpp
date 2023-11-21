/* 5.WAP to check how strcpy() and strlen() work.*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	char arr[100];
	
	cout<<" enter the string : "<<endl;
	cin.getline(str,100);
	
	cout<<" enter the string 2 : "<<endl;
	cin.getline(arr,100);
	
	cout<<" length 1 = "<<strlen(str)<<"   length 2 = "<<strlen(arr);
	
	char temp[100];
	
	strcpy(temp,str);
	strcpy(str,arr);
	strcpy(arr,temp);
	
	cout<<"\n string 1 = "<<str<<" string 2 = "<<arr;
	
	return 0;
}
