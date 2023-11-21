/*Q3.Scan array of n integers from user.Count how many times 15 is present in array.
(n integers means runtime memory allocations)
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"ENter the values you want :"<<endl;
	cin>>n;
	
	int *p;
	int count = 0;
	p = new int[n];
	
	cout<<"Enter the values : "<<endl;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
		
		if(*(p+i)==15)
		{
			count ++;
		}
	}
	
	cout<<"count = "<<count;
	
	return 0;
}
