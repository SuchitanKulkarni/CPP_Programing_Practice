/*
Q14.
class Time
{
	private:
		int hrs,mins;
}
int main()
{
	Time T1,T2,T3;
	cin>>T1>>T2;
	~T1;
	~T2;
	//~ is overloaded here to convert given time in correct format.
	//if input is 3 hrs 90 mins
	//output will be 4 hrs 30 mins.
	T3 = T1 + T2;
	~T3;
	cout<<T3;
}
*/

#include<iostream>
using namespace std;

class Time
{
	private:
		int hrs,mins;
		
	public:
		
		void operator ~ ()
		{
			hrs = hrs + mins/60;
			mins = mins%60;
		}
		
		Time operator + (Time p)
		{
			Time ans;
			
			ans.hrs = hrs + p.hrs;
			ans.mins = mins + p.mins;
			
			return ans;
		}
		
		friend istream & operator >> (istream & din,Time & p);
		friend ostream & operator << (ostream & dout,Time p);
};

istream & operator >> (istream & din,Time & p)
{
	cout<<"Enter the hour and minus : "<<endl;
	cin>>p.hrs>>p.mins;
	
	return din;
}

ostream & operator << (ostream & dout,Time p)
{
	cout<<p.hrs<<" "<<p.mins;
	
	return dout;
}
int main()
{
	Time T1,T2,T3;
	cin>>T1>>T2;
	~T1;
	~T2;
	//~ is overloaded here to convert given time in correct format.
	//if input is 3 hrs 90 mins
	//output will be 4 hrs 30 mins.
	T3 = T1 + T2;
	~T3;
	cout<<T3;
}
