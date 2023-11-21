/* Q12.
	class Number
	{
		public:
			int x;
			int y;
	};
Create 2 objects in main().Scan their data and print.
*/

#include<iostream>
using namespace std;

class Number
	{
		public:
			int x;
			int y;
			
			void scandata()
			{
				cout<<"enter the x and y :"<<endl;
				cin>>x>>y;
			}
			
			void print()
			{
				cout<<"x = "<<x<<"y = "<<y;
			}
	};
	
	int main()
	{
		Number n1,n2;
		
		n1.scandata();
		n2.scandata();
		n1.print();
		n2.print();
		
		return 0;
	}
