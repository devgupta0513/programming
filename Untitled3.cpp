#include<stdio.h>
#include<iostream>
using namespace std;
 
void printArray(int g[], int n){
    for (int i = 0; i <n; i++)
    {
       
       cout<<g[i]<<" ";
    }
    cout<<endl;
}
 int maximum(int A[], int n)
 {
 	int max=0;
 	for(int i=0;i<n;i++)
 	{
 		if(A[i]>max)
 		{
 	max	=A[i];	
		 }
 		
	 }
 void count(int A[],int n)
{
	int i,j;
	int max=maximum(A,n);
	
 int Array[max];
 
	for(int i=0;i<=max;i++)
	{
		Array[i]=0;
		
	}
	for(int i=0;i<n;i++)
	{
		Array[A[i]]=Array[A[i]]+1;
		
	}
	i=0;
	j=0;
	while(i<=max)
	{
		if(Array[i]>0)
		{
			A[j]=i;
			Array[i]=Array[i]-1;
			j++;
			
		}
		else
		i++;
	}
}
 int main(){
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = 7;
    printArray(A, n);
    count(A, n);
    printArray(A, n); 
    return 0;
}
	
 
 
 

