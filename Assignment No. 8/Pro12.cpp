/* Q12.
class Number
{
	int x;
};
class Digit
{
	private:
		void scan()
		{
			//create object of number.
			//scan and print data of this object
		}
	public:
		void show();
};
int main()
{
	Digit var;
}
Complete the above program.Do not add your own member functions.
*/

#include<iostream>
using namespace std;

class Number
{
	int x;
	friend class Digit;
};
class Digit
{
	private:
		Number scan()
		{
			Number obj;
			cout<<"Enter the x : "<<endl;
			cin>>obj.x;
			
			return obj;
		}
	public:
		void show();
};
void Digit ::show()
{
	Number p;
    p = scan();
	cout<<" x = "<<p.x;
}
int main()
{
	Digit var;
	
	var.show();
	
	return 0;
}
