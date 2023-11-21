/*
Q15.
class Digit
{
	public:
		int arr[5];
};

Create an array of 4 objects.Sort array of integer in each object in ascending order.
Print array of each object.
*/

#include<iostream>
using namespace std;

class Digit
{
	public:
		int arr[5];
		
		void scan()
		{
			int i;
			cout<<"Enter the 5 Integers : "<<endl;
			
			for(i=0;i<5;i++)
			{
				cin>>arr[i];
			}
		}
		
		void show()
		{
			int i;
			
			for(i=0;i<5;i++)
			{
				cout<<arr[i]<<" ";
			}
		}
		
		void sort()
		{
			int i,j,temp;
			
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(arr[i]>arr[j])
					{
						temp = arr[i];
						arr[i] = arr[j];
						arr[j] = temp;
					}
				}
			}
		}
};

int main()
{
	Digit D[4];
	
	int i;
	
	for(i=0;i<4;i++)
	{
		D[i].scan();
	}
	for(i=0;i<4;i++)
	{
		D[i].sort();
	}
	
	for(i=0;i<4;i++)
	{
		D[i].show();
	}
	
	return 0;
}
