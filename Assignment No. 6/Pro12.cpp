/*
6)class Student has 2 private members.name and age.
	int main()
	{
		Student S;
		cout<<"\nEnter name of student = ";
		cin.getline(S.name,20);
		cout<<"\nEnter age of student = ";
		cin>>S.age;
		show(S);
		return 0;
	}
	*/
	
#include<iostream>
using namespace std;

class Student
{
	char name[20];
	int age;
	
	friend int main();
	friend void show(Student s);
};
void show(Student s)
{
	cout<<"name = "<<s.name<<" age = "<<s.age;;
}
int main()
{
	Student S;
		cout<<"\nEnter name of student = ";
		cin.getline(S.name,20);
		cout<<"\nEnter age of student = ";
		cin>>S.age;
		show(S);
		return 0;
}
