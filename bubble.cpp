#include<iostream>
using namespace std;
bool check(int a[],int n)
{
	bool t=1;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
		 t=0;
		 break;	
		}
		
	}
	return t;
}








//#include<iostream>
//using namespace std;
//class sort {
//	int i ,j,temp,t=1;
//	public:
//		sort (int arr[],int n)
//		{
//			for (i=0;i<n-1;i++)
//			{
//				for (j=0;j<n-1-i;j++)
//				{
//					if(arr[j]>arr[j+1])
//					{
//					temp=arr[j+1];
//					arr[j+1]=arr[j];
//					arr[j]=temp;
//					t=0;
//					}
//				
//				 } 
//			}
//			if(t)
//			{
//				cout<<"sorted"<<endl;
//			}
//			else
//			{
//				cout<<"not sorted"<<endl;
//			}
//			
//		}
//		void display(int n,int arr[]){
//		 for (i=0;i<n;i++)
//		 {
//		 	cout<<arr[i]<<" ";
//		 }
//		}
//		
//};
int main(){
	int b[]={0,6,2,10,15,4,7,1,9};
	int a[]={0,1,2,3,4,5,6,7,8};
	int n= sizeof(a)/sizeof(a[0]);
//	sort d(a,n);
//	d.display(n,a);
  cout<<check(b,n);
	
	
	return 0;
}
