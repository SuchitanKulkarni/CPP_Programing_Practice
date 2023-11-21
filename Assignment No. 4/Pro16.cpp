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
			
		public :
			void scandata();
			void printdata();
			void convert();
	};
	
	void Distance :: scandata()
	{
		cout<<"enter the data : "<<endl;
		cin>>km>>mtr;
		
	}
	void Distance :: printdata()
	{
		cout<<km<<mtr;
	}
	
	void Distance :: convert()
	{
		km = km+mtr/1000;
		mtr= mtr%1000;
	}
	
	int main()
	{
		Distance d1,d2;
		d1.scandata();
		d2.scandata();
		d1.convert();
		d2.convert();
		d1.printdata();
		d2.printdata();
		
		return 0;
	}
	
	
