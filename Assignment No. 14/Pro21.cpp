/*
3.
Connect a file to fstream object in read,write and ate mode.
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
	
	fobj.open(path, ios::in| ios::out|ios::ate );
	
	if(fobj.fail()==1)
	{
		cout<<"Not connected"<<endl;
		exit(1);
	}
	cout<<"Connected"<<endl;
	
	fobj<<"hello dear"<<endl;
	
	char str[100];
	
	fobj.seekg(0,ios::beg);
	
	fobj.getline(str,100);
	
	cout<<"str = "<<str<<endl;
	
	fobj.seekg(0,ios::beg);
	
	fobj<<"oooo"<<endl;
	
	fobj.seekg(0,ios::beg);
	
	fobj.getline(str,100);
	
	cout<<"str = "<<str<<endl;
	
	fobj.close();
	
	return 0;
}
