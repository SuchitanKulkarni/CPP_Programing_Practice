/*
5)class Time has 2 private data members.(hours and minutes)

	int main()
	{
		Time T1,T2;
		T1 = Time::getdata();
		T2 = Time::getdata();
		int total1,total2;
		total1 = T1.total();
		total2 = T2.total();
		cout<<"\nTotal1 = "<<total1;
		cout<<"\nTotal2 = "<<total2;
		return 0;
	}
	*/
	
#include<iostream>
using namespace std;

class Time
{
	int time ;
	int min  ;
	
	public:
		static Time getdata()
		{
			Time obj;
			cout<<"Enter the time and min : "<<endl;
			cin>>obj.time>>obj.min;
			
			return obj;
		}
		
		int total()
		{
			int Total = (time*60 )+ min ;
			
			return Total; 
		}
};
	int main()
	{
		Time T1,T2;
		T1 = Time::getdata();
		T2 = Time::getdata();
		int total1,total2;
		total1 = T1.total();
		total2 = T2.total();
		cout<<"\nTotal1 = "<<total1;
		cout<<"\nTotal2 = "<<total2;
		return 0;
	}
