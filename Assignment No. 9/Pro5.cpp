/* Q5.Scan 3 strings from user.Print the string which will go last in dictionary.
Write whole code in main() only.
*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	char arr[100];
	char temp[90];
	
	cout<<"enter the string 1 : "<<endl;
	cin.getline(str,100);
	
	cout<<"enter the string 2 : "<<endl;
	cin.getline(arr,100);
	
	cout<<"enter the string 3 : "<<endl;
	cin.getline(temp,90);
	
	int res = strcmp(str,arr);
	
	if(res == 1)
	{
		res = strcmp(str,temp);
		
		if(res == 1)
		{
			cout<<"last in dictionary : "<<str;
		}
		else if(res == -1)
		{
			cout<<"last in dictionary : "<<temp;
		}
		else
		{
			cout<<arr<<" = "<<temp;
		}
	 } 
	 else if(res == -1)
	 {
	 	res = strcmp(arr,temp);
	 	
	 	if(res == 1)
	 	{
	 		cout<<"last in dictionary : "<<arr;
		 }
		 else if(res == -1)
		 {
		 	cout<<"last in dictionary : "<<temp;
		 }
		 else
		 {
		 	cout<<str<<" = "<<temp;
		 }
	 }
	 
	 else
	 {
	 	res = strcmp(str,temp);
	 	
	 	if(res == 1)
	 	{
	 		cout<<str<<" = "<<arr;
		 }
		 else if(res == -1)
		 {
		 	cout<<"last in dictionary : "<<temp;
		 }
		 else
		 {
		 	cout<<str<<" = "<<arr<<" = "<<temp;
		 }
	 }
	 
}
