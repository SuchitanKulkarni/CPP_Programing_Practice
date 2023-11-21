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

	main()
	{
		Digit D;
		D.getdata();
	}
void Digit :: getdata()
{
		Number obj;
				cout<<"Enter the x andy y : "<<endl;
				cin>>obj.x>>obj.y;
				
				cout<<" x = "<<obj.x<<" y = "<<obj.y;
}
