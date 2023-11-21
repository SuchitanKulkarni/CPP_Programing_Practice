/* Q13.
class Number
{
	public:
		int num[5];
};
Create 3 objects of Number in main().Scan their data.
Find the largest integer among all 15 integers.
Do not add any member function.
*/

#include<iostream>
using namespace std;

class Number
{
	public:
		int num[5];
};

void scan(Number &obj)
{
	cout<<"enter the 5 integers : "<<endl;
	int i;
	for(i=0;i<5;i++)
	{
		cin>>obj.num[i];
	}
}
void Largest(Number p,Number q,Number r)
{
	int max1,max2,max3 ,Max;
	
	max1 = p.num[0];
	max2 = q.num[0];
	max3 = r.num[0];
	int i;
	for(i=0;i<5;i++)
	{
		if(max1<p.num[i])
		{
			max1 = p.num[i];
		}
		
		if(max2<q.num[i])
		{
			max2 = q.num[i];
		}
		if(max3<r.num[i])
		{
			max3 = r.num[i];
		}
	}
	
	if(max1>max2)
	{
		Max = max1;
	}
	else
	{
		Max = max2;
	}
	
	Max = Max>max3 ? Max : max3;
	
	cout<<"Largest = "<<Max;
}
int main()
{
	Number T1,T2,T3;
	scan(T1);
	scan(T2);
	scan(T3);
	
	Largest(T1,T2,T3);
	
	return 0;
}
