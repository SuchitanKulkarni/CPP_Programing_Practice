/*
Q3.Complete the code for following main() function.
 class Number
{
	int x,y;
};
int main()
{
	Number T1,T2,T3(1);
	T3= T1 * T2;
	T3.show();
	T3 = T3 ^ 2; //treat ^ as power operator.
	//It should perform x^2 and y^2; 
	T3.show();
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
			cout<<"Enter the x and y :  "<<endl;
			cin>>x>>y;
		}
		Number(int a)
		{
			x = a;
			y = a;
		}
		
		Number operator *(Number p)
		{
			Number ans(0);
			
			ans.x = x * p.x;
			ans.y = y * p.y;
			
			return ans;
		}
		Number operator ^(int a)
		{
			Number ans(0) ;
			
			int i,sum = 1, res =1;
			for(i=1;i<=a;i++)
			{
				sum = sum*x;
				res = res *y;
			}
			
			ans.x = sum;
			ans.y = res;
			
			return ans;
		}
		void show()
		{
			cout<<" x = "<<x<<" y = "<<y<<endl;
		}
};
int main()
{
	Number T1,T2,T3(1);
	T3= T1 * T2;
	T3.show();
	T3 = T3 ^ 2; //treat ^ as power operator.
	//It should perform x^2 and y^2; 
	T3.show();
}

