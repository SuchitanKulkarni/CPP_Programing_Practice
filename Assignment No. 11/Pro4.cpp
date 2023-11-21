/*
Q4.Complete the code for following main() function.
class Number
{
	int x,y;
};
int main()
{
	Number T1(3,7);
	Number T2;
	T2 = -T1;
	T1.show();// should print 3,7
	T2.show();// should print -3,-7
}
*/

#include<iostream>
using namespace std;

class Number
{
	int x,y;
	
	public:
		
		Number()
		{
			
		}
		
		Number (int a,int b)
		{
			x = a;
			y = b;
		}
		Number(int a)
		{
			
		}
		
		Number operator - ()
		{
			Number ans(0);
			
			ans.x = -x;
			ans.y = -y;
			
			return ans;
		}
		
		void show()
		{
			cout<<" x = "<<x<<" y = "<<y<<endl;
		}
};
int main()
{
	Number T1(3,7);
	Number T2;
	T2 = -T1;
	T1.show();// should print 3,7
	T2.show();// should print -3,-7
}
