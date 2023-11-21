/*

Q5.Complete the code for following main() function.
class Number
{
	int x,y;
};
int main()
{
	Number T1(3,6),T2(T1),T3(2,9),T4;
	T4 = ++T1;
	T4.show();
	T4 = T1 - T2 + T3;
	T4.show();
	T4 = ~T3; //bitwise complement.
	T4.show();// will print ~T3.x and ~ T3.y
}
*/

#include<iostream>
using namespace std;

class Number
{
	int x,y;
	
	public:
		
		Number(int a,int b)
		{
			x = a;
			y = b;
		}
		Number(Number & p)
		{
			x = p.x;
			y = p.y;
		}
		Number(int a)
		{
			
		}
		Number operator ++()
		{
			Number ans(0);
			
			ans.x = x + 1;
			ans.y = y + 1;
			
			return ans;
		}
		Number operator + (Number p)
		{
			Number ans(0);
			
			ans.x = x + p.x;
			ans.y = y + p.y;
			
			return ans;
		}
		Number operator -(Number p)
		{
			Number ans(0);
			
			ans.x = x - p.x;
			ans.y = y - p.y;
			
			return ans;
		}
		Number operator ~()
		{
			Number ans(0);
			
			ans.x = ~x;
			ans.y = ~y;
			
			return ans;
		}
		
		void show()
		{
			cout<<"x = "<<x<<" y = "<<y<<endl;
		}
};
int main()
{
	Number T1(3,6),T2(T1),T3(2,9),T4(0);
	T4 = ++T1;
	T4.show();
	T4 = T1 - T2 + T3;
	T4.show();
	T4 = ~T3; //bitwise complement.
	T4.show();// will print ~T3.x and ~ T3.y
}

