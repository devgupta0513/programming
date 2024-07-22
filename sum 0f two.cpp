#include<iostream>
using namespace std;
void sum(int a[],int n,int result)
{ int j,sum,one;	
   for(int i=0;i<n;i++)
   {
   	if(i>0 && a[i]==a[i-1])
   	{
   		continue;
	}
	one=a[i];
	sum=result-one;
	
	j=i+1;
	while(j<n)
	{
		if(sum==a[j])
	{
		cout<<a[i]<<"\t"<<a[j]<<endl;
		j++;
		if(a[j]==a[j-1])
		{
			j++;
		}
	}
	else
	{
		j++;
	}
	}
	
   }
}


int main()
{
   int a[]={2 ,-3, 3 ,3 ,-2};
   int result=0;
   int n=5;
   sum(a,n,result);
   return 0;
}
