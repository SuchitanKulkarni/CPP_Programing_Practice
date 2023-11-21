/* 7.Scan array of 8 integers from user.Write menu driven program for following activities.
-find largest value
-find smallest value
-Scan a number from user and check if it is present in the array or not.
*/

#include<iostream>
using namespace std;

int main()
{
	int num[8];
	int i,choice;
	cout<<"Enter the 8 integers : "<<endl;
	for(i=0;i<8;i++)
	{
		cin>>num[i];
	}
	
	cout<<"press\n1. for largest number \n2. smallest number \n3. find a number \n";
	cout<<"Enter your choice : "<<endl;
	cin>>choice;
	int max,min;
	
	switch(choice)
	{
		case 1 : max = num[0];
		 		for(i=0;i<8;i++)
		 		{
		 			if(max<num[i])
		 			{
		 				max = num[i];
					 }
				 }
				 cout<<"Largest value = "<<max<<endl;
				 
				 break;
				 
		case 2 :  min = num[0];
				 for(i=0;i<8;i++)
				 {
				 	if(min>num[i])
				 	{
				 		min = num[i];
					 }
				 }
				 cout<<"Smallest value = "<<min<<endl;
				 
				 break;
				 
		case 3 :  int n;
		 		  cout<<"Enter the number want to search in array : "<<endl;
		 		  cin>>n;
		
		          for(i=0;i<8;i++)
	             {
	             	if(n == num[i])
	             	{
	             		cout<<"Present in array "<<endl;
	             		break;
					 }
					 else
					 {
					 	cout<<"Not present in array "<<endl;
					 	break;
					 }
				 }
				 
				 break;
				 
		default : cout<<"Wrong Input";
	}
	
	return 0;
}
