/*
Q7.
class City
{
	public:
		string name;
		int population;
};
Create a database of 5 cities.Print the database.
If user enters same city again,give him message that
the city is already present.Ask him to enter new city name.
If he enters population less than 100,give him message wrong population.
Ask him to enter correct population.
*/

#include<iostream>
using namespace std;

class City
{
	public:
		string name;
		int population;
};
int main()
{
	City c[5];
	string s;
	int a;
	int i,j,k,S;
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter the city : "<<endl;
		getline(cin,s);
		
		for(j=0;j<5;j++)
		{
	
			if(s==c[j].name)
			{
				cout<<"city is already in array. enter another city"<<endl<<endl;
				break;
			}
			else
			{
				c[j].name = s;
			}
     	}
    }
    
	for(k=0;k<5;k++)
	{
		 cout<<"enter the population : "<<endl;
		 cin>>a;
			if(a<100)
			{
				cout<<"enter the correct population(<100)"<<endl<<endl;
			}
			else
			{
				c[k].population = a;
			}
	}
	
	for(S=0;S<5;S++)
	{
		cout<<c[S].name<<" "<<c[S].population<<endl;
	}
	
	return 0;
}

