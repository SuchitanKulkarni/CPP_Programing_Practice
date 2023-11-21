/*
9.
For class Distance containing km and mtr,scan 6 distances from user.Find the largest distance.
(Use operator overloading.Data members must be private)
*/

#include<iostream>
using namespace std;

class Distance
{
	int km,mtr;
	
	public:
		
		Distance()
		{
			cout<<"enter the distance : "<<endl;
			cin>>km>>mtr;
		}
		
		int operator <(Distance p)
		{
			if( km < p.km)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		void convert()
		{
			km = km*1000 + mtr;
		}
		
		friend ostream& operator <<(ostream& dout, Distance p);
};

 ostream& operator <<(ostream& dout, Distance p)
 {
 	cout<<p.km<<" "<<endl;
 	
 	return dout;
 }

int main()
{
	Distance d[6];
	
	int i;
	
	for(i=0;i<6;i++)
	{
		d[i].convert();
	}
	
	Distance temp = d[0];
	
	for(i=0;i<6;i++)
	{
		if(temp < d[i])
		{
			temp = d[i];
		}
	}
	
	cout<<"Largest distance  = "<<temp<<endl;
	
	return 0;
}

