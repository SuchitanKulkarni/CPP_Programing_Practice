/*
2.
Connect a file to fstream object in read,write and append mode.
Check if you can edit and read the previous content of the file.
Write new data into file.
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path[] = "D:\\hello.txt";
	
	fstream fobj;
	
	fobj.open(path,ios::in | ios::out | ios::app );
	
	if(fobj.fail()==1)
	{
		cout<<"Not connected"<<endl;
		exit(1);
	}
	cout<<"connected"<<endl;
	
	fobj<<" End of the file.. "<<endl;  // if we mention endl at the end of file then no need of file to close
	
	char str[100];
	
	fobj.seekg(0,ios::beg);
	
	fobj.getline(str,100);
	
	cout<<"str = "<<str<<endl;
	
	fobj.seekg(0,ios::beg);
	
	fobj<<"lllll"<<endl;
	
	fobj.seekg(0,ios::beg);
	
	fobj.getline(str,100);
	
	cout<<"str = "<<str<<endl;
	
	fobj.close();
	
	return 0;
	
	
}
