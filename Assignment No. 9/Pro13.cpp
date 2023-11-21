/* 
Q13.
class Number
{
	private:
		int x;
};
class Digit
{
	private:
		void show()
		{
			//create object of Number
			//scan and print data of object of Number
		}
};
Do not add any other member function in class Digit.
*/

#include<iostream>
using namespace std;

class Digit
{
	private:
		void show();
		
};
class Number
{
	private:
		int x;
		
	friend class Digit;
};

void Digit :: show()
		{
			Number obj;
			
			cout<<"Enter the value of x : "<<endl;
			cin>>obj.x;
			
			cout<<obj.x;
		}

int main()
{
	Digit D1;
	D1.show();
	
	return 0;
	
}
