/*
Q15.
class Time
{
	private:
		int hrs,mins;
}
Scan time for 3 objects from user.
Find the object with largest time.
This program is to be done 2 times.
-Without operator overloading 
-With operator overloading.
(Think about main() first)
*/

#include<iostream>
using namespace std;

class Time
{
	private:
		int hrs,mins;
		
	public:
		
		Time()
		{
			cout<<"ENter the hrs and mins : "<<endl;
			cin>>hrs>>mins;
		}
		Time(int a)
		{
			
		}
		
		int operator > (Time p)
		{
			if(hrs > p.hrs && mins > p.mins)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
	friend ostream & operator << (ostream & dout , Time p);
};

ostream & operator << (ostream & dout , Time p)
{
	cout<<p.hrs<<" "<<p.mins;
	
	return dout;
}

int main()
{
	Time T1,T2,T3;
	
	Time res(0);
	
	res = T1 > T2 ? T1 : T2 ;
	res = res > T3 ? res : T3 ;
	
	cout<<res;
	
	return 0;
}
