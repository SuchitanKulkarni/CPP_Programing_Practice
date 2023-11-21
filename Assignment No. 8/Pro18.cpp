/*
Q18.WAP to explain this pointer.Try and violate all the rules given.
*/

#include<iostream>
using namespace std;

class number
{
	private : 
	int x,y;
	
	public:
		
		void set(int a)
		{
			int x ;
			x = a;
			cout<<"x = "<<x<<endl;
			this->x = a;
			cout<<"this -> x = "<<this->x;
		}
 };
 int main()
 {
 	number T1;
 	
 	T1.set(5);
 	
 	return 0;
 }
