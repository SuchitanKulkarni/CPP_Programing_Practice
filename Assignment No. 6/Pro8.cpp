/* 2)class Student has 2 private members.name and age.
	int main()
	{
		Student S1,S2;
		S1.scan();
		S2.scan();
		S1.print();
		S2.print();
		return 0;
	}
	*/
	
#include<iostream>
using namespace std;

class Student
{
	char name[80];
	int age;
	
	public:
		
		void scan()
		{
			cout<<"enter the name : "<<endl;
			cin.getline(name,80);
			
			cout<<"enter the age : "<<endl;
			cin>>age;
			cin.ignore(1);
		}
		void print()
		{
			cout<<name<<" "<<age<<endl;
		}
};
int main()
	{
		Student S1,S2;
		S1.scan();
		S2.scan();
		S1.print();
		S2.print();
		return 0;
	}
