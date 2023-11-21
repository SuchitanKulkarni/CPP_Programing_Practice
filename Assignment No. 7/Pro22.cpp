/* 2.
	class Number
	{
		private:
			int x;
			void scandata();
			void printdata();
	};
	int main()
	{
		//Scan and print data of one object of Number.
	}
	*/
	
#include<iostream>
using namespace std;

class Number
	{
		private:
			int x;
			void scandata();
			void printdata();
			
			friend int main();
			
	};
	
	void Number :: scandata()
	{
		cout<<"enter the x : "<<endl;
		cin>>x;
	}
	void Number :: printdata()
	{
		cout<<" x = "<<x;
	}
	
	int main()
	{
		Number obj;
		
		obj.scandata();
		obj.printdata();
		
		return 0;
	}
