/* Q4.Write a menu driven program for arithmetic operations of 2 integers. */

#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	cout<<"Enter the 2 integers : "<<endl;
	cin>>num1>>num2;
	
	int choice;
	cout<<"For Arithmetic operation : \n 1.Addition . \n 2.Subtraction . \n 3.Multiplication . \n 4.Division . \n 5.Modulus ."<<endl<<endl;
	cout<<"ENter your choice : "<<endl<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 1 : cout<<"ADDITION = "<<num1+num2;
				break;
				
		case 2 : cout<<"SUBTRACTION = "<<num1-num2;
		         break;
		         
		case 3 : cout<<"MULTIPLICATION = "<<num1*num2;
				break;
				
		case 4 : cout<<"DIVISION = "<<num1/num2;
				 break;
				 
		case 5 : cout<<"MODULUS = "<<num1%num2;
				 break;
			
		default : cout<<"Wrong Input";
	}
	
	return 0;
}

