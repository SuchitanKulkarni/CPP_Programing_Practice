/*
Q7.Complete the code for following main() function.
class Distance
{
	int km,mtr;
};
int main()
{
	Distance D1,D2,D3,D4;
	scan(D1);
	scan(D2);
	scan(D3);
	D4 = D1>D2?D1:D2;
	D4 = D4<D3?D3:D4;
	D4.show();
}
*/

#include<iostream>
using namespace std;

class Distance
{
	int km,mtr;
	
	friend void scan(Distance & p);
	
	public:
		
		int operator > (Distance p)
		{
			int t1,t2;
			
			t1 = km*1000 + mtr;
			t2 = p.km*1000 + p.mtr;
			
			if(t1>t2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		int operator < (Distance p)
		{
			int t1,t2;
			
			t1 = km*1000 + mtr;
			t2 = p.km*1000 + p.mtr;
			
			if(t1<t2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		void show()
		{
			cout<<"km = "<<km<<" mtr = "<<mtr<<endl;
		}
};
void scan(Distance & p)
{
	cout<<"Enter the distance in km and mtr : "<<endl;
	cin>>p.km>>p.mtr;
}
int main()
{
	Distance D1,D2,D3,D4;
	scan(D1);
	scan(D2);
	scan(D3);
	D4 = D1>D2?D1:D2;
	D4 = D4<D3?D3:D4;
	D4.show();
}
