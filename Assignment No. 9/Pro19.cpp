/*
Q19.
class Distance
{
	private:
		int km,mtr;
};
Create an array of 8 objects.Sort this array in ascending order by distance in each object.
You can add your member function also.
*/

#include<iostream>
using namespace std;

class Distance
{
	private:
		int km,mtr;
		
	public:
		
		void scan()
		{
			cout<<"Enter the distance (km and mtr) : "<<endl;
			cin>>km>>mtr;
		}
		
		void convert()
		{
			km = km*1000 + mtr;
		}
		void show()
		{
			cout<<km<<" ";
		}
		
	  int sort(Distance p)
		{
			int temp;
		   if(km > p.km)
		   {
		   	  return 1;
		   }
		   else
		   {
		   	  return 0;
		   }
		}
};

int main()
{
	Distance d[8];
	
	int i;
	
	for(i=0;i<8;i++)
	{
		d[i].scan();
	
	}
	
	for(i=0;i<8;i++)
	{
			d[i].convert();
	}
	
	int j;
	
	Distance temp;
	
   for(i=0;i<8;i++)
   {
   	  for(j =i+1;j<8;j++)
   	  {
   	  	  if(d[i].sort(d[j]))
   	  	  {
   	  	  	temp = d[i];
   	  	  	d[i] = d[j];
   	  	  	d[j] =  temp;
   	  	  	 
		   }
   	  	  
	  }
   }
	
    
	
	for(i=0;i<8;i++)
	{
		d[i].show();
	}
	
	
}
