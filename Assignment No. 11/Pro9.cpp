/*
Q9.
Complete the code using operator overloading for following main() function.
class Distance
{
	public:
		int km;
		int mtr;
};

int main()
{
	Distance D1,D2;
	~D1;
	~D2;
	//Above 2 statements should scan data for D1 and D2.
	if(D1 == D2)
	{
		cout<<"Both distances are equal";
	}
	ilse if(D1>D2)
	{
		cout<<"D1 > D2";
	}
	else if(D1<D2)
	{
		cout<<"D1<D2";
	}
}
*/

#include<iostream>
using namespace std;

class Distance
{
	public:
		int km;
		int mtr;
		
		void operator~()
		{
			cout<<"Enter the km and mtr : "<<endl;
			cin>>km>>mtr;
		}
		int operator == (Distance p)
		{
			int t1,t2;
			
			t1 = km*1000 + mtr;
			t2 = p.km*1000 + p.mtr;
			
			if(t1== t2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		int operator > (Distance p)
		{
			int t1,t2;
			
			t1 = km*1000 + mtr;
			t2 = p.km*1000 + p.mtr;
			
			if(t1 > t2)
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
			
			if(t1 < t2)
			{
				return 1;
		    }
		    else
		   {
			 	return 0;
		    }
		}
};

int main()
{
	Distance D1,D2;
	~D1;
	~D2;
	//Above 2 statements should scan data for D1 and D2.
	if(D1 == D2)
	{
		cout<<"Both distances are equal";
	}
	else if(D1>D2)
	{
		cout<<"D1 > D2";
	}
	else if(D1<D2)
	{
		cout<<"D1<D2";
	}
	
	return 0;
}
