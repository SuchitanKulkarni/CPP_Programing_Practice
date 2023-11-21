/* Q10.Scan a number from user.Print addition of its digits. */

#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the digit : "<<endl;
	cin>>num;
	
	int sum=0,rem;
	
	while(num>0)
	{
		rem = num%10;
		num = num/10;
		sum = sum +rem;
	}
	
	cout<<"ADDITION = "<<sum;
	
	return 0;
	
}
