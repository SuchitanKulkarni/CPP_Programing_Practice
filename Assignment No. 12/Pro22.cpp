/*
6.create an array of 6 city names.Sort this array in ascending order.
Use string datatype.
*/

#include<iostream>
using namespace std;

int main()
{
	string city[6];
	
	int i;
	
	for(i=0;i<6;i++)
	{
		cout<<"Enter the city : "<<endl;
		getline(cin,city[i]);
	}
	
	int j;
	
	string temp;
	
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(city[i] > city[j])
			{
				temp = city[i];
				city[i] = city[j];
				city[j] = temp;
			}
		}
	}
	
	cout<<"\nSorted array is :"<<endl<<endl;
	for(i=0;i<6;i++)
	{
		cout<<city[i]<<" ";
	}
}
