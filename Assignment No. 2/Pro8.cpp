/* Q8.Keep scanning a number from user until he enters 0.Count number of positive and negative integers user has entered */

#include<iostream>
using namespace std;

int main()
{
	int num;
	int pcount=0,ncount=0;
	while(1)
	{
		cout<<"Enter the value : "<<endl;
		cin>>num;
		
		if(num==0)
		{
			break;
		}
		if(num>0)
		{
			pcount++;
		}
		if(num<0)
		{
			ncount++;
		}
	}
	
	cout<<"Positive = "<<pcount<<endl;
	cout<<"Negative = "<<ncount;
	
	return 0;
}
