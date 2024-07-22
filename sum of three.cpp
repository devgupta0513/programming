#include<iostream>
using namespace std;


int partioning(int a[],int low, int high)
{
	int i=low+1;
	int j=high;
	int temp,pivot=a[low];
	do{
		
	
	while(a[i]<=pivot)
	{
		i++;
	}
	while(a[j]>pivot)
	{
		j--;
	}
	if(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
		}while(i<j);
		
		temp=a[low];
		a[low]=a[j];
		a[j]=temp;

return j;
}
void quicksort(int A[], int low, int high)
{
	int partion;
	if (low < high)
	{

		partion = partioning(A, low, high);
		quicksort(A, low, partion - 1);	 // left subarray
		quicksort(A, partion + 1, high); // right subarray
	}
}
 void sum3(int a[],int result,int n)
{ int j,k,one,sum2;

	for(int i=0;i<n;i++)
	{   
	    if(i>0 && a[i]==a[i-1])
	    {
	    	continue;
		}
		one=a[i];
		j=i+1;
		k=n-1;
		sum2=result-one;
		
		while(j<k)
		{
			if(a[j]+a[k]==sum2)
			{    
				cout<<one<<"\t"<<a[j]<<"\t"<<a[k]<<endl;
				j++;k--;
				
				if(a[j]==a[j-1])
				{
					j++;
				}
				if(a[k]==a[k+1])
				{
					k--;
				}
				
			}
			
			 else if(a[j]+a[k]<sum2)
			{
				j++;
				if(a[j]==a[j-1])
				{
					j++;
				}
			}
			else if(a[j]+a[k]>sum2)
			{
				k--;
				if(a[k]==a[k+1])
				{
					k--;
				}
			}
			
		}
		
		
	}
	
}

 
 void print(int a[],int n)
 {
 	for (int i=0;i<n;i++)
 	{
 		cout<<a[i]<<"\t";
	 }
	 cout<<endl;
 }
 void arrin(int a[],int n)
 {
 	for (int i=0;i<n;i++)
 	{  
 	    cout<<"element no "<<i+1<< " = ";
 		cin>>a[i];
	 }
 }
 
int main()
{
//	int n,A[100];
//	cout<<"no of element in array = ";
//	cin>>n;
//	arrin(A,n);
//	quicksort(A,0,n-1);
//	print(A,n);
	int res;
	int n=6;
	int g[]={-1,0,1,2,-1,-4};
	quicksort(g,0,n-1);
//	int b[]={1,1,1,2,2,2,3,3,3};
// int c[]=  {-2   ,   -2    ,  -2  ,    -1     , -1  ,    -1   ,   0  ,     0  ,     0   ,    2   ,    2    ,   2     ,  2};
//	int b[]={-1,0,1,2,-1,-4};
//	cout<<"enter sum of three  : ";
//	cin>>res;
cout<<"the triplets are \n";
	sum3(g,0,n);
	
	
	
	return 0;
}
