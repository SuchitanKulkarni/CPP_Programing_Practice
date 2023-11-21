/* 
3.Declare and itialize an array of 8 integers.Find the smallest value from array.
(pointer notation) 
*/

#include<iostream>
using namespace std;

int main()
{
	int num[8] = {1,2,3,4,5,6,7,8};
	int *p = &num[0];
	
	int i,min = *(p+0);
	for(i=0;i<8;i++)
	{
		if(min>*(p+i))
		{
			min = *(p+i);
		}
	}
	
	cout<<"Smallest value = "<<min;
	
	return 0;
}
