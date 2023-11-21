/* Q8.
WAP to scan array of 8 integers in main().Sort it in descending order. 
*/

#include<iostream>
using namespace std;

int main()
{
	int num[8];
	int i;
	cout<<"enter the 8 integers : "<<endl;
	
	for(i=0;i<8;i++)
	{
		cin>>num[i];
	}
	int temp, j;
	
	for(i=0;i<8;i++)
	{
		for(j=i+1;j<8;j++)
		{
			if(num[i]>num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	
	for(i=0;i<8;i++)
	{
		cout<<num[i]<<" ";
	}
}
