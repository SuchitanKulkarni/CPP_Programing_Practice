/* Q3.Write a menu driven program for user to choose from any given 3 language.
e.g.If user enters 1,print marathi,for 2,print hindi and so on. */

#include<iostream>
using namespace std;

int main()
{
	int choice;
	cout<<"Press\n1.Marathi\n2.Hindi\n3.English"<<endl;
	cout<<"Enter the choice"<<endl;
	cin>>choice;

	switch(choice)
	{
		case 1 : cout<<"Marathi";
		         break;
		         
		case 2 : cout<<"Hindi";
				 break;
				 
		case 3 : cout<<"English";
				 break;
				 
		default : cout<<"Wrong Input";
		
	}
	
	return 0;
}

