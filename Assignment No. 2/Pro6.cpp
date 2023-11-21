/* Q6.Scan an array of 6 inetegers from user.Find the maximum value in the array. */

#include<iostream>
using namespace std;

int main()
{
	int num[6];
	int i;
	
	cout<<"Enter the 6 integers : "<<endl;
	for(i=0;i<6;i++)
	{
		cin>>num[i];
	}
	
	int max = num[0];
	
	for(i=0;i<6;i++)
	{
		if(num[i]>max)
		{
			max = num[i];
		}
	}
	
	cout<<"Maximum Number = "<<max;
	
	return 0;
}

