/* Q16.
	class Distance
	{
		private:
			int km,mtr;
			void scandata();
			void printdata();
			void convert();
	}
Scan 2 distances from user.Convert them in total distance in convert() function. */

#include<iostream>
using namespace std;

class Distance
	{
		private:
			int km,mtr;
			void scandata();
			void printdata();
			void convert();
			
			friend int main();
	};
	void Distance :: scandata()
	{
		cout<<"enter the distance : "<<endl;
		cin>>km>>mtr;
	}
	void Distance :: printdata()
	{
		cout<<km<<mtr<<endl;
	}
	
	void Distance :: convert()
	{
		int total = km*1000 + mtr;
		
		cout<<"total = "<<total;
	}
	
	int main()
	{
		Distance d1,d2;
		
		d1.scandata();
		d2.scandata();
		d1.printdata();
		d2.printdata();
		d1.convert();
		d2.convert();
		
		return 0;
	}
