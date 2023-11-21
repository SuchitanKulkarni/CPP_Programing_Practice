/*Q13.
	class Time
	{
		public:
			int hour,min;
	}
Create 2 objects of class Time.Scan their data.
Convert these objects in total meters.Decide which one is greater.
*/

#include<iostream>
using namespace std;

	class Time
	{
		public:
			int hour,min;
			
			void scan()
			{
				cout<<"enter the hour and min :"<<endl;
				cin>>hour>>min;
			}
			int convert()
			{
				int total = hour*60+min;
				return total;
			}
			
	};
	
	int main()
	{
		Time t1 ,t2;
		t1.scan();
		t2.scan();
		int d1,d2;
		d1 = t1.convert();
		d2 = t2.convert();
		
		if(d1>d2)
		{
			cout<<"Time 1 is greater "<<endl;
		}
		else
		{
			cout<<"Time 2 is greater ";
		}
		return 0;
	}
