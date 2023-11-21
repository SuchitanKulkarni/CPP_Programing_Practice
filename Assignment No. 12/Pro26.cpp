/*
10.
class Student
{
	public:
		char name[30];
		int age;
		String hometown;
};
Create an array of 4 students.Print only those students whose hometown is "PUNE".
*/

#include<iostream>
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
		string hometown;
		
	Student()
	{
		cout<<"Enter the name : "<<endl;
		cin.getline(name,30);
		
		cout<<"Enter the age : "<<endl;
		cin>>age;
		cin.ignore(1);
		
		cout<<"Enter the hometown : "<<endl;
		getline(cin,hometown);
		
	}
	
	int operator == (string p)
	{
		if(hometown == p)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
    friend	ostream& operator <<(ostream& dout,Student p);
    
};

ostream& operator <<(ostream& dout,Student p)
{
	cout<<p.name<<" "<<p.age<<" "<<p.hometown<<endl;
	
	return dout;
}

int main()
{
	Student s[4];
	
	int i;
	
	string p = "PUNE";
	
	for(i=0;i<4;i++)
	{
		if(s[i]==p)
		{
			cout<<s[i];
		}
	}
	
	return 0;
	
}
