/* 6.Keep scanning a number from user.Print addition of positive and negative numbers seperately. */

#include<iostream>
using namespace std;

int main()
{
	int num,psum =0,nsum=0;
	
	while(1)
	{
		cout<<"Enter a number : "<<endl;
		cin>>num;
		
		
		if(num==0)
		{
			break;
		}
		
		if(num>0)
		{
			psum = psum +num;
		}
		if(num<0)
		{
			nsum = nsum +num;
		}
	}
	
	cout<<"Positive number = "<<psum<<endl;
	cout<<"Negative number = "<<nsum<<endl;
	
	return 0;
}
