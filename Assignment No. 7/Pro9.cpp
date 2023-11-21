/* 
4.
	class Student	
	{
		public:
			char name[20];
			int age;
	};
	int main()
	{
		Student T1,T2;
		//scan and print data for T1 and T2 in main() only.
	} 
	*/
	
#include<iostream>
using namespace std;

class Student
{
	public:
		char name[20];
		int age;
		
};

int main()
{
	Student T1,T2;
	cout<<"enter the name : "<<endl;
	cin.getline(&T1.name[0],30);
	
	cout<<"enter the age : "<<endl;
	cin>>T1.age;
	
	cout<<"enter the name : "<<endl;
	cin.getline(&T2.name[0],30);
	cin.getline(&T2.name[0],30);
	
	cout<<"enter the age : "<<endl;
	cin>>T2.age;
	
	cout<<&T1.name[0]<< " "<<T1.age;
	cout<<&T2.name[0]<<" "<<T2.age;
	
	return 0;
}
