/* Q23.Complete the following program which checks if given number is even or odd.
	int main()
	{
		int x;
		cout<<"\nEnter x = ";
		cin>>x;
		if(isEven(x) == 1)
		{
			cout<<"\nGiven number is even");
		}
		else
		{
			cout<<"\nGiven number is not even");
		}
	}
*/
#include<iostream>
using namespace std;
int isEven(int x);
int main()
{
	int x;
		cout<<"\nEnter x = ";
		cin>>x;
		if(isEven(x) == 1)
		{
			cout<<"\nGiven number is even";
		}
		else
		{
			cout<<"\nGiven number is not even";
		}
		
		return 0;
}
int isEven(int x)
{
	if(x%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
