
#include <iostream>
using namespace std;



void revert (int a[],int n , int k  )
{ 
	
	
		
		int b[k];
	if(k>n)
	k=k%n;
	
	
	for(int i = n-k ;i<n;i++)
	{
		b[i-n+k]=a[i];
		
	}
	for( int i= n-k-1 ; i>=0;i--)
	{
		
		a[i+k]=a[i];
		
	}
	
	for(int i=0;i<k;i++)
	{
		
		a[i]=b[i];
	}
	
	
	
}
int main() {
	int num;
	cin>>num;
	
	while(num--)
	{
		int n,k;
	cin>>n>>k;
	
	int a[100];
	for(int i=0 ;i<n;i++)
	{
		cin>>a[i];
	}
	

	revert(a,n,k);
	
	for(int i=0 ;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	}

return 0;
}





