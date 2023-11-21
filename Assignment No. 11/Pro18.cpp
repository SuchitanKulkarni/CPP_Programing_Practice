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
		
		Time compair (Time p)
		{
			if(hrs > p.hrs && mins > p.mins)
			{
				Time ans (0);
				ans.hrs = hrs;
				ans.mins = mins;
				return ans;
			}
			else
			{
				Time ans (0);
				ans.hrs = p.hrs;
				ans.mins = p.mins;
				return ans;
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
	
	res = ((T1.compair(T2)).compair(T3));
	
	cout<<res;
	
	return 0;
}
