#include <bits/stdc++.h> 
#include<iostream>
using namespace std;


//void swap (int &a,int &b)
//{
//	int temp;
//	temp=a;
//	a=b;
//	b=temp;
//}
//void sort012(int a[], int n)
//{
//   int i=0;
//   int j=0;
//   int k=n-1;
//   while(j<=k)
//   {
//   	if(a[j]==0)
//   	{
//   		swap(a[i],a[j]);
//   		i++;
//   		j++;
//	}
//	else if(a[j]==1)
//	{
//		j++;
//	}
//   	else
//   	{
//   		swap(a[j],a[k]);
//   		k--;
//	}
//   	
//   }
//   
//   
//   
//
//}
//void print(int a[],int n)
// {
// 	for (int i=0;i<n;i++)
// 	{
// 		cout<<a[i]<<"\t";
//	 }
//	 cout<<endl;
// }


void sort012(int a[],int n)

{ 
    int count0=0;
	int count1=0;
	int count2=0;
	for (int i=0;i<n;i++)
	{
		if(a[i]==0)count0++;
		if(a[i]==1)count1++;
		if(a[i]==2)count2++;
	}
	cout<<count0<<count1<<count2<<endl;
	for (int i=0;i<n;i++)
	{
		if(count0)
		{
			cout<<"0\t";
			count0--;
		}
		 else if(count1)
		{
			cout<<"1\t";
			count1--;
		}
       else  if(count2)
		{
			cout<<"2\t";
			count2--;
		} 
	}
	
}











int main()
{
	int a[]={0, 1, 2 ,2 ,1 ,0,0};
	int n=sizeof(a)/sizeof(a[0]);
	 sort012(a,n);
	 
	 
	
	return 0;
	
}
