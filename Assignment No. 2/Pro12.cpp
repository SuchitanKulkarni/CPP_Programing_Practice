/* Q12.Create memory at runtime for n integers.Scan n integers from user.Count how many times 10
is present in the array. */

#include<iostream>
using namespace std;

int main()
{
	int n,i,count=0;
	cout<<"Enter the number : ";
	cin>>n;
	
	int *p;
	p = new int[n];
	cout<<"Enter the "<<n<<" numbers : "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
		
		if(*(p+i)==10)
		{
			count++;
		}
	}
	
	cout<<"Count = "<<count;
	
	return 0;
	
	
	
	
}
