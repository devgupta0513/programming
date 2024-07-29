#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class node
{
	public:
	int data;
	node *next;
	   node()
	   {
	   	
	   }
		node(int data)
		{
			this->data=data;
			this->next=NULL;
		}
		node * insert(node* head, int n)
		{  
		int value;
		node *q;
		if(head==NULL)
		{
			cout<<"enter the value of node 1 = ";
			cin>>value;
			node *p = new node(value);
			head=p;
			n--;
		}
		q=head;
		
		for(int i =0;i<n;i++)
		{
			cout<<"enter the value of node "<<i+2<<" = ";
			cin>>value;
			node *p = new node(value);
			while(q->next!=NULL)
			{
				q=q->next;
			}
			q->next=p;
			
		}
		return head;
		}
		node * insert(int n,node  * head)
		{ int value;
			for(int i=0;i<n;i++)
			{
				cout<<"enter the value of node "<<i+1<<" = ";
				cin>>value;
				node *p= new node(value);
				p->next=head;
				head=p;
			
			}
			
			return head;
			
			
		}
		
		node * deleted(int no,node * head)
		{
			
			for(int i=0 ;i<no;i++)
			{   node *p =head;
				head=head->next;
				delete(p);
			}
			return head;
		}
		
		
		
		void print(node * start)
		{
			
		while(start!=NULL)
		{
			cout<<start->data<<"\t";
			start=start->next;
		}	
		cout<<endl;
		}
		
		node * join(node * one , node * two)
		{
			node * p = one;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			p->next=two;
			
			return one;
		}
};
int main()
{
	int n;
	cout<<"enter the number of node = " ;
	cin>>n;
	node *head=NULL;
	head=head->insert(head,n);
	head->print(head);
	node *second=NULL;
	cout<<"\nenter the number of node = " ;
	cin>>n;
	second=head->insert(second,n);
	head->print(second);
	head=head->join(second,head);
	head->print(head);
	
	
	cout<<"\n enter the new value of head = ";
	cin>>n;
	head=head->insert(n,head);
	head->print(head);
	cout<<"\n enter the no  of nodes u wanted to delete from start = ";
	cin>>n;
	head=head->deleted(n,head);
	head->print(head);
	
	
	return 0;
}
