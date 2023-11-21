/*
7.
Using inbuilt string datatype,Create array of 6 city names.
Sort this array in ascending order.
*/

#include<iostream>
using namespace std;

int main()
{
	string city[6];
	
	int i,j;
	
	string temp;
	
	for(i=0;i<6;i++)
	{
		cout<<"Enter the city name : "<<endl;
		getline(cin,city[i]);
	}
	
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
	
	for(i=0;i<6;i++)
	{
		cout<<city[i]<<" ";
	}
	
	return 0;
}
