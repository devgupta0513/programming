#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node * next;
};
 struct node * head()
 {
 	struct node *start =(struct node *)malloc(sizeof(struct node));
 		     cout<<"enter the value at node 1  : ";

	 cin>>start->data;
	start->next=NULL;
	return start; 
 }
 struct node * start_i(struct node * start )
 {
 	struct node *p =(struct node *)malloc(sizeof(struct node));
 	cout<<"enter the value at node 1  : ";

	 cin>>p->data;
	 p->next=start;
	 start=p;
	 return start;
 	
 }
 void end_i (struct node * start,int n)
 {		
 		
 	for(int i = 0 ; i< n ; i++)
	 {
	 	
 		 struct node * p=(struct node *)malloc(sizeof(struct node));
	     p=start;
	     while(p->next!=NULL)
			{
				p=p->next;
			}
	     struct node * q =(struct node *)malloc(sizeof(struct node));
	     cout<<"enter the value at node "<<(i+2)<<" : ";
	     cin>>q->data;
	     q->next=NULL;
	     p->next=q;
	 }
 }
 struct node * start_d(struct node * start )
 {
 	struct node * p =(struct node *)malloc(sizeof(struct node));
 	p=start;
    start=p->next;
    p->next=NULL;
    free(p);
    return start;
 }
 
 void end_d (struct node * start)
 { 
 	struct node * p =(struct node *)malloc(sizeof(struct node));
 	p=start->next;
 	while(p->next != NULL)
 	{
 		start=start->next;
 		p=p->next;
	 }
	 start->next=NULL;
	 free(p);
	 
	 
 }
 
  void position_i(struct node * start)
  {
  	struct node * p = (struct node *)malloc(sizeof(struct node));
  	int n;
  	cout<<"POSITION : ";
  	cin>>n;
  	for(int i = 0 ; i < n-2; i++)
  	{
  		start=start->next;	
	}
	
	cout<<"THE DATA YOU WANT TO INSERT : ";
	cin>>p->data;
	p->next=start->next;
	start->next=p;	
	
	
  }
  void position_d( struct node * start)
  {
  	 	struct node * p =(struct node *)malloc(sizeof(struct node));
  	 	p=start->next;

  	int n;
  	cout<<"POSITION : ";
  	cin>>n;
  	for(int i = 0 ; i < n-2; i++)
  	{
  		start=start->next;	
  		p=p->next;
	}
	
	start->next=p->next;
	p->next=NULL;
	free(p);
	
  	
  }
  	
  
void print(struct node * start)
 {  int COUNT=1;
 	while(start!=NULL)
 	{     
 		cout<<"DATA OF NODE NO. "<<COUNT<<" = "<<start->data<<endl;
 		start=start->next;
 		COUNT++;
	 }
 } 
void linkedlist()
{
	int n; 
	cout<<"how many nodes you want to create in LINKED LIST : ";
	cin>>n;
	
	struct node * start;
	start=head();
	end_i(start,n-1);
	print(start);
//    start=start_d(start);
//    print(start);
//    start=start_i(start);
//    print(start);
//    end_d(start);
//    print(start);
    position_i(start);
    print(start);
    position_d(start);
    print(start);
}

int main()
{
	linkedlist();
	return 0;
	
}