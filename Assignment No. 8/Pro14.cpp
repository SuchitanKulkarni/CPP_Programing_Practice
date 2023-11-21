/* Q14.		
class Number
{
	private:
		int num[5];
};
Create 3 objects of Number in main().Scan their data.
Find the smallest integer among all 15 integers.
Add only necessary member functions.
*/

#include<iostream>
using namespace std;

class Number
{
	private:
		int num[5];
		
	public:
	
	
	void scan()
   {
	    cout<<"enter the 5 integers : "<<endl;
	     int i;
	     for(i=0;i<5;i++)
	    {
		    cin>>num[i];
	    }
    }
    
    friend void smallest(Number p,Number q,Number r);

};
    void smallest(Number p,Number q,Number r)
{
	int min1,min2,min3 ,Min;
	
	min1 =p.num[0];
	min2 =q.num[0];
	min3= r.num[0];
	int i;
	for(i=0;i<5;i++)
	{
		if(min1>p.num[i])
		{
			min1 = p.num[i];
		}
		
		if(min2>q.num[i])
		{
			min2 = q.num[i];
		}
		if(min3>r.num[i])
		{
			min3 = r.num[i];
		}
	}
	
	if(min1<min2)
	{
		Min = min1;
	}
	else
	{
		Min = min2;
	}
	
	Min = Min<min3 ? Min : min3;
	
	cout<<"Smallest = "<<Min;
}

int main()
{
	Number T1,T2,T3;
	T1.scan();
	T2.scan();
	T3.scan();
	
	smallest(T1,T2,T3);
	
	return 0;
}
