/* 21.Declare and initialize an array of 6 integers.Access your arrary using pointer and count 
how many times 10 is present in the array.*/

#include<iostream>
using namespace std;

int main()
{
	int num[6]={1,2,10,4,5,6};
	int count=0;
	int *p = &num[0];
	for(int i=0;i<6;i++)
	{
	
	   cout<<*(p+i)<<" "<<endl;
	   
	   if(*(p+i)==10)
	   {
	    count++;
	   	
	   }
    }
    cout<<"count ="<<count<<endl;
    
    
}
