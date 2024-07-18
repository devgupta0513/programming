#include<iostream>
using namespace std;
 void display(int array[],int n)
 {
 	for(int i=0;i<n;i++)
 	{
 		cout<<array[i]<<"\t";
	 }
	 cout<<endl;
 }
  
  void burst_time(int bt[],int n)
  {
  	int temp;
  	for( int i=0;i<n;i++)
      {
         for( int j=i+1;j<n;j++)
          {
                if(bt[i]>bt[j])
                {
                      temp=bt[i];
                      bt[i]=bt[j];
                      bt[j]=temp;
                }
          }
      }
  }
  int com_time(int bt[],int ct[],int n)
  {
  	ct[0]=bt[0];
  	
  	for (int i=1;i<n;i++)
  	{
  		ct[ i]=bt[i]+ct[i-1];
	  }
  }
  void SJF(int bt[],int n)
 {
 	int ct[n],tat[n],wt[n];
    burst_time(bt,n);
    com_time(bt,ct,n);
    display(ct,n);
 }
  
int main()
{
	int at[]={0,0,0,0,0};
	int bt[]={5,6,3,8,4};
	int n = sizeof at / sizeof at[0];
	
	
	cout<<"arrival time\n";
	display(at,n);
	cout<<"burst time\n";
	display(bt,n);
	SJF(bt,n);
	

	
	
	
	

return 0;	
}
