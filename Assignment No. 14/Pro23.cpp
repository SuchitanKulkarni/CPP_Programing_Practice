/*
5.
WAP to write 5 objects of class Student into file.
*/

#include<iostream>
#include<fstream>
using namespace std;

class Student
{
	public:
		
		int age;
		
		char name[90];
		
		Student()
		{
			cout<<"Enter the name :"<<endl;
			cin.getline(name,89);
			
			cout<<"Enter the age : "<<endl;
			cin>>age;
			cin.ignore(1);
		}
};

int main()
{
	char path [] = "D:\\source.txt";
	
	fstream fout;
	
	fout.open(path,ios::out|ios::binary);
	
	if(fout.fail()==1)
	{
		cout<<"not connectd"<<endl;
		exit(1);
	}
	cout<<"Connected"<<endl;
	
    Student obj[5];
	
	for(int i=0;i<5;i++)
	{
		fout.write((char*)&obj[i],sizeof(obj[i]));
	}
	
	return 0; 
}
