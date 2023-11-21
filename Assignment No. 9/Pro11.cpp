/* Q11.
Q11.
class Number
{
	public:
		int num[5];
};
Create an array of 3 objects.Find the largest element from 15 integers.
Do not add any member or independant function.
Create an array of 3 objects.Find the largest element from 15 integers.
Do not add any member or independant function.
*/

#include<iostream>
using namespace std;


class Number
{
	public:
		int num[5];
};
int main()
{
	Number obj[3];
	
	int i,j,temp;
	
	cout<<"enter the the integers 15 :  "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
		  cin>>obj[i].num[j];
		}
	}
	
	int  max1,max2,max3,Max;
	
	max1 = obj[1].num[0];
	max2 = obj[2].num[0];
	max3 = obj[3].num[0];
	
	for(i=0;i<5;i++)
	{
		if(max1<obj[1].num[i])
		{
			max1 = obj[1].num[i];
		}
		if(max2 <obj[2].num[i])
		{
			max2 = obj[2].num[i];
		}
		if(max3<obj[3].num[i])
		{
			max3 = obj[3].num[i];
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
	
	Max = Max>max3 ? Max :max3;
	
	cout<<" largest value = "<<Max;
	
	return 0;
	// need to solve again
}
