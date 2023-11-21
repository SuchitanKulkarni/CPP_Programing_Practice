/*
Q18.
class Distance
{
	public:
		int km,mtr;
};
Create an array of 8 objects.Sort this array in ascending order by distance in each object.
Do not add any member function.Write whole code in main() only.
*/

#include<iostream>
using namespace std;

class Distance
{
	public:
		int km,mtr;
};

int main()
{
	Distance d[8];

    int i;
    
    for(i=0;i<8;i++)
    {
    	cout<<"Enter the Distances(km and mtr) :  "<<endl;
    	cin>>d[i].km>>d[i].mtr;
	}
	cout<<endl;
	int j,temp;
	
	for(i=0;i<8;i++)
	{
		d[i].km = d[i].km *1000 + d[i].mtr;
		
		cout<<d[i].km<<" ";
	}
	
	for(i=0;i<8;i++)
	{
		for(j=i+1;j<8;j++)
		{
			if(d[i].km > d[j].km)
			{
				temp = d[i].km;
				d[i].km = d[j].km;
				d[j].km = temp;
			}
		}
	}
	
	cout<<"\n\n sorted Distances are : "<<endl<<endl;
	
	for(i=0;i<8;i++)
	{
		cout<<d[i].km<<" ";
	}
	
	return 0;
}
