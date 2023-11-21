/*
Q11.
class Distance
{
	public:
		int km;
		int mtr;
};
int main()
{
	Distance D1,D2;
	cout<<"Enter 2 distances = ";
	cin>>D1>>D2;
	if(D1 == D2)	
	{
		cout<<"\nBoth distances are equal";
	}
	else
	{
		cout<<"\nNot equal";
	}
}
*/

#include<iostream>
using namespace std;

class Distance
{
	public:
		int km;
		int mtr;
		
		int operator == (Distance p)
		{
			int t1,t2;
			
			t1 = km*1000 +mtr;
			t2 = p.km*1000 + p.mtr;
			
			if(t1 == t2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};

istream & operator >> (istream & din , Distance & p)
{
	cout<<"Enter the km and mtr : "<<endl;
	cin>>p.km>>p.mtr;
	
	return din;
}
int main()
{
	Distance D1,D2;
	cout<<"Enter 2 distances = ";
	cin>>D1>>D2;
	if(D1 == D2)	
	{
		cout<<"\nBoth distances are equal";
	}
	else
	{
		cout<<"\nNot equal";
	}
	
	return 0;
}
