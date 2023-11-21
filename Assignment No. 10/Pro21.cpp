/*
20.WAP to understand local classes.(class defined inside a function)

*/

#include<iostream>
using namespace std;

int main()
{
	class number
	{
		public:
			int x;
			void scan()
			{
				cout<<"enter the value : "<<endl;
				cin>>x;
			}
			void show()
			{
				cout<<" x = "<<x;
			}
	};
	
	number obj;
	
	obj.scan();
	obj.show();
	
	return 0;
}
