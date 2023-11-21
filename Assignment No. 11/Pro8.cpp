/*
Q8.Complete the program for following main() function.
Do not use operator overloading.Write code which is necessary to implement
statements written in comment.
int main()
{
	Number T1,T2,T3,T4,T5(0);
	//T5 = T1 + T2;
	T5.show();
	//T5 = T1 + T2 + T3;
	T5.show();
	//T5 = T1+T2*T3;
	T5.show();	
	//T5 = T1+T2+T3+T4;
	T5.show();
}
*/

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		Number()
		{
			cout<<"Enter the x and y : "<<endl;
			cin>>x>>y;
		}
		Number(int a)
		{
			
		}
		
		Number add(Number p)
		{
			Number ans(0);
			
			ans.x = x + p.x;
			ans.y = y +p.y;
			
			return ans;
		}
		Number mul(Number p)
		{
			Number ans(0);
			
			ans.x = x*p.x;
			ans.y = y*p.y;
			
			return ans;
		}
		
		void show()
		{
			cout<<"T5.x = "<<x<<" T5.y = "<<y<<endl;
		}
};
int main()
{
	Number T1,T2,T3,T4,T5(0);
	//T5 = T1 + T2;
	T5 = T1.add(T2);
	T5.show();
	//T5 = T1 + T2 + T3;
	T5 = ((T1.add(T2)).add(T3));
	T5.show();
	//T5 = T1+T2*T3;
	T5 = ((T1.add(T2)).mul(T3));
	T5.show();	
	//T5 = T1+T2+T3+T4;
	T5 = (((T1.add(T2)).add(T3)).add(T4));
	T5.show();
}
