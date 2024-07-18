#include<iostream>
using namespace std;
#define size 4

int isprime(int x)
{
	int prime = 0;
	for(int  i=2;i<(x/2);i++)
	{
		if(x%i==0)
		prime=1;
	}
	if(!prime)
	{
	cout<<x<<endl;
	return x;
		
	}
	
	
	else
	return 0;
}
int sum (int x, int y)
{
	int sum=0;
	for(int i=x;i<=y;i++)
	{
		sum+=isprime(i);
	}
}



int main()
{
	//cout<<sum(30,40);
	
	int a[size][size]={{1,2,3,4},
				{12 ,13 ,14, 5},
				{11  ,16 ,15, 6},
				{10 ,9, 8, 7}};
				int srow=0,erow=size-1,scolumn=0,ecolumn=size-1;
				while(srow!=size-1)
				{
					
				
				for(int i=scolumn;i<=ecolumn;i++)
				{
					cout<<a[srow][i]<<" ";
					
				}
				srow++;
				for(int i=srow;i<=erow;i++ )
				{
					cout<<a[i][ecolumn]<<" ";
				}
				ecolumn--;
				
				for(int i=ecolumn;i>=scolumn;i-- )
				{
					cout<<a[erow][i]<<" ";
				}
				erow--;
				for(int i=erow;i>=srow;i-- )
				{
					cout<<a[i][scolumn]<<" ";
				}
	        	scolumn++;
	        }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
