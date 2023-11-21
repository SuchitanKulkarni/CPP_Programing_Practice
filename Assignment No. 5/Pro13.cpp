/* Q13.
	class Time
	{
		public:
			int hour,min;
	}
Create 2 objects of class Time.Scan their data.
Convert these objects in total mins.Decide which one is greater. */

#include<iostream>
using namespace std;

	class Time
	{
		public:
			int hour,min;
			
			void scandata()
			{
				cout<<"enter the hour and min : "<<endl;
				cin>>hour>>min;
			}
			int convert()
			{
				int total = hour*60 +min;
				
				cout<<"Total = "<<total;
				
				return total;
			}
	};
	
	int main()
	{
		Time t1, t2;
		int T1,T2;
		t1.scandata();
		t2.scandata();
		T1 = t1.convert();
		T2 = t2.convert();
		
		if(T1>T2)
		{
			cout<<" \nt1 is greater "<<endl;
		}
		else
		{
			cout<<"t2 is greater"<<endl;
		}
	}
