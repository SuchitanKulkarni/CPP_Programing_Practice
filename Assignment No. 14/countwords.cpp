/*
4.
Create a command 'countWords' which will count number of words present in the string.
*/

#include<iostream>
using namespace std;

int main(int argc,char * argv[])
{
	if(argc == 1)
	{
		cout<<"\nEnter the string "<<endl;
		exit(1);
	}
	
	int i ,count = 0;
	
	for(i=0;i<argc -1;i++)
	{
	    count++;
	}
	
	cout<<"words = "<<count;
	
	return 0;
	
}
