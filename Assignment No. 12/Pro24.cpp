/*
8.
class Student
{
	public:
		String name;
		int age;
		String hometown;
};
Create an array of 4 students.Print only those students whose hometown is "PUNE".
(You can use operator overloading also if you understand how to use)
*/

#include<iostream>
using namespace std;

class Student
{
	public:
		string name;
		int age;
		string hometown;
		
	Student()
	{
		cout<<"Enter the name : "<<endl;
		getline(cin,name);
		
		cout<<"Enter the age : "<<endl;
		cin>>age;
		cin.ignore(1);
		
		cout<<"Enter the Hometown : "<<endl;
		getline(cin,hometown);
		
	}
	
	int operator == (string l)
	{
		if(hometown == l)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
	friend ostream& operator <<(ostream& dout,Student p);
	
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
	
	string p = "pune";
	
	for(i=0;i<4;i++)
	{
		if(s[i] == p)
		{
			cout<<s[i];
		}
	}
	
	
}
