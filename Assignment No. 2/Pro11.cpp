/* Q11.Scan array of n integers from user.Print addition of all integers.
While printing the result,first print whole array then print addition. */

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number that you want to create an Array : "<<endl;
	cin>>n;
	int *p;
	p = new int[n];
	int i,sum=0;
	
	cout<<"Enter the "<<n<<" Numbers : "<<endl;
	
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	
	cout<<"Array is \n";
	for(i=0;i<n;i++)
	{
		sum = sum+*(p+i);
		
		cout<<*(p+i)<<" ";
	}
	
	cout<<"\nADDITION = "<<sum;
	
	return 0;
}
