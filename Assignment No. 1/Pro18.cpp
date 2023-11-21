/* 18.Scan array of 8 fractions from user.Count how many of them are greater than 10.*/

#include<iostream>
using namespace std;

int main()
{
	float num[8];
	int i;
	int count =0;
	cout<<"Enter the 8 fraction numbers"<<endl;
	for(i=0;i<8;i++)
	{
		cin>>num[i];
		
		
		if(num[i]>10)
		{
			count++;
		}
	}
	
	cout<<"Count ="<<count;
	
	return 0;
	
	
}
