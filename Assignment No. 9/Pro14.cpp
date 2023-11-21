/* Q14.Read new operator theory.
Create an array of n integers.Sort this array in ascending order.
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the n number : "<<endl;
	cin>>n;
	int * p;
	
	p = new int[n];
	int i;
	cout<<"enter the "<<n<<" integers : "<<endl;
	for(i =0;i<n;i++)
	{
		cin>>*(p+i);
	}
	
	int j,temp;
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<" ";
	}
	
	return 0;
}
