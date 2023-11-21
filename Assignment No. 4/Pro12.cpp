/*Q12.
	class Number
	{
		public:
			int x;
			int y;
	};
Create 2 objects in main().Scan their data and print.*/

#include<iostream>
using namespace std;

class Number
	{
		public:
			int x;
			int y;
			
	};
	
	int main()
	{
		Number n1,n2;
		cout<<"enter the x and y :"<<endl;
		cin>>n1.x>>n1.y;
		
		cout<<"Enter the x and y :"<<endl;
		cin>>n2.x>>n2.y;
		
		cout<<n1.x<<n1.y<<endl;
		cout<<n2.x<<n2.y;
		
		return 0;
	}
