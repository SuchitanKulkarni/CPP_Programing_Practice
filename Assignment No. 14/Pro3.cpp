/*
3.
int main()
{
	int num[4] = {10,13,4,31};
	int *ptr[4];
}
In above main() function,each element of ptr should contain address
of corresponding elements of num array.ptr[0] will contain address of num[0],
ptr[1] contains address of num[1] and so on.
Using ptr array find the addition of all elements of num array.
*/

#include<iostream>
using namespace std;

int main()
{
	int num[4] = {10,13,4,31};
	int *ptr[4];
	
	int i;
	
	for(i=0;i<4;i++)
	{
		ptr[i] = &num[i];
	}
	
	int l = 0 ;
	
	for(i=0;i<4;i++)
	{
		l = l + *ptr[i];
	}
	
	cout<<"\nAddition = "<<l;
	
	return 0;
}
