/*
File handling

1.
Write a program to connect a file in read mode.
File will contain multiple lines.
Perform read operation on file for 3 times using getline.
Everytime your read operation should read first line of file.
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path [] = "D:\\hello.txt";
	
	ifstream fin(path);
	
	
	if(fin.fail()==1)
	{
		cout<<"not connected"<<endl;
		exit(1);
	}
	cout<<"connected"<<endl;
	
	char str[100];
	fin.getline(str,100);
	cout<<"str = "<<str<<endl;
	
	fin.seekg(0,ios::beg);
	
	fin.getline(str,100);
	cout<<" str = "<<str<<endl;
	
	fin.close();
	
	return 0;
}
