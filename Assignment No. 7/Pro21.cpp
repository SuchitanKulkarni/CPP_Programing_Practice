/* Q3.Read each question carefully and complete the code for given tasks.You can use frined function here.

1.
	class Number
	{
		int x,y;
	};
	class Digit
	{
		public:
			void getdata()
			{
				Number obj;
				//scan and print obj here.
			}
	};
	main()
	{
		Digit D;
		D.getdata();
	}
	*/
	
#include<iostream>
using namespace std;

class Number;
	class Digit
	{
		public:
			void getdata();
	};
	
		class Number
	{
		int x,y;
		friend void Digit :: getdata();
	};
	
	void Digit :: getdata()
			{
				Number obj;
				cout<<"enter the x and y : "<<endl;
				cin>>obj.x>>obj.y;
				
				cout<<" x = "<<obj.x<<" y = "<<obj.y;
			}
			
	main()
	{
		Digit D;
		D.getdata();
	}
