/*
6.
WAP to read 5 objects from file which you have written in Q5. 
*/

#include<iostream>
#include<fstream>
using namespace std;

class Student
{
	public:
		
		int age;
		char name[90];
		
		void show()
		{
			cout<<" name = "<<name<<" age = "<<age<<endl;
		}
		
};

int main()
{
	char path[] = "D:\\source.txt";
	
	fstream fin;
	
	fin.open(path,ios::out|ios::in|ios::binary);
	
	if(fin.fail()==1)
	{
		cout<<"Not connected"<<endl;
		exit(1);
	}
	cout<<"Connected"<<endl;

    Student obj[5];
	
	for(int i=0;i<5;i++)
	{
		
	   fin.read((char*)&obj[i],sizeof(obj[i]));
	}
	
	for(int i=0;i<5;i++)
	{
		obj[i].show();
	}
}
