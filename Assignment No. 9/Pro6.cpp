/* Q6.
class Student
{
	private:
		char name[30];
		int age;
		char hometown[20];
};
Scan data for 3 students.
Print this data.Add your own member functions.

*/

#include<iostream>
using namespace std;

class Student
{
	private:
		char name[30];
		int age;
		char hometown[20];
		
	public :
		
		void scan()
		{
			cout<<"Enter the name : "<<endl;
			cin.getline(name,30);
			
			cout<<"enter the age : "<<endl;
			cin>>age;
			cin.ignore(1);
			
			cout<<"Enter the hometown : "<<endl;
			cin.getline(hometown,20);
			
		}
		
		void show()
		{
			cout<<name<<" "<<age<<" "<<hometown<<endl;
		}
};

int main()
{
	Student S1,S2,S3;
	
	S1.scan();
	S2.scan();
	S3.scan();
	
	S1.show();
	S2.show();
	S3.show();
	
	return 0;
}
