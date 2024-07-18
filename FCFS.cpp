#include<iostream>
using namespace std;

void com_time(int at[],int bt[],int ct[],int n)
  {
  	ct[at[0]]=bt[at[0]];
  	for (int i=1;i<n;i++)
  	{
  		ct[at[i]]=bt[at[i]]+ct[at[i-1]];
	}
  }
  
void turn_around_time(int at[],int ct[],int tat[],int n)
{
	for(int i=0;i<n;i++)
	{
		tat[i]=ct[i]-at[i];
	}	
}

void waiting_time(int bt[],int tat[],int wt[],int n)
{
	for(int i=0;i<n;i++)
	{
		wt[i]=tat[i]-bt[i];
	}
}

void average(int at[],int bt[],int ct[],int tat[],int wt[],int n)
{
	float avg_tat = 0,avg_wt = 0;
	
	cout<<"PROCESSES\t ARRIVAL TIME\t BURST TIME\t COMPLETION TIME ";
	 cout<<"\t TURN AROUND TIME\t  WAITING TIME\t"<<endl;
 	for(int i=0;i<n;i++)
   	{
 		cout<<"p"<<i<<"\t\t\t"<<at[i]<<"\t\t";
		 cout<<bt[i]<<"\t\t"<<ct[i]<<"\t\t\t";
		 cout<<tat[i]<<"\t\t\t"<<wt[i]<<endl;
		 avg_tat +=tat[i];
		 avg_wt +=wt[i];
	 }
	  avg_tat /=n;
	  avg_wt /=n;
	  cout<<"\t\t\t\t\t\t\t\t\t AVERAGE = "<<avg_tat<< "\t\tAVERAGE = "<<avg_wt<<"\n\n";
 }
 
void gantt_chart(int at[],int n)
{
	  cout<<"\t\t\t\tGANTT CHART ----->(";
	  for(int i=0;i<n;i++)
	  {
	  	cout<<"p"<<at[i];
	  	if(i==n-1)
	  	{
	  		cout<<".";
		}
		  else
		  cout<<"->";	  	
	  }
	  cout<<")\n\n";

}

 void FCFS(int at[],int bt[],int n)
 {
 	int ct[n],tat[n],wt[n];
 	com_time(at,bt,ct,n);
 	turn_around_time(at,ct,tat,n);
 	waiting_time(bt,tat,wt,n);
 	average(at,bt,ct,tat,wt,n);
 	gantt_chart(at,n);
 }
int main()
{
	int at[]={0,1,2,3,4};
	int bt[]={5,6,3,8,4};
	int n = sizeof at / sizeof at[0];
	FCFS(at,bt,n);
	int nat[]={3,1,4,0,2};
	int nbt[]={8,6,4,5,3};
	FCFS(nat,nbt,n);
	return 0;	
}
