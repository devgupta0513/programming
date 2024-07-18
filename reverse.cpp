#include<iostream>
using namespace std;
int hcf (int a,int b)
{
	if (a==0)
	return b;
	 if (b==a)
	return a;
	  if (a==b)
	return a;
	 if(a>b)
	return hcf(a-b,b);
	
	return hcf(a,b-a);
	
	 
}

  
    
      
      
 

int lcm(int a,int b)
{ int high,lcm;
	if(a>b)
	high=a;
	else
	high =b;
	while(1)
	{
		if(high%a==0 and high%b==0)
		{
			lcm = high;
			break;
		}
		high=high+1;
		
	}
	return lcm;
	
}
int main()
{
	int g;
	g=lcm(20,30);
	cout<<g;
	return 0;
	
}
