#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node * right;
	node * left;
	
	
		node(int data)
		{
			this->left=NULL;
			this->data=data;
			this->right=NULL;
			
			
		}
		
		node * create(node * head,int value)
		{ 
		
		
			if(head==NULL)
			{
				
				 
				node * p =  new node(value);
				head=p;
				return head;
			}
			else
			{
				
				node * p = head;
				
				node * q= new node(value);
				while(p->right!=NULL)
				{
					p=p->right;
				}
				p->right=q;
				q->left=p;
				return head;	
			}
		}
		void print(node * head)
		{
			cout<<"the list is =>  ";
			while(head!=NULL)
			{
				cout<<head->data;
				if(head->right == NULL)cout<<" . ";
				else cout<<" - > ";
				head=head->right;
			}
			
		}
//		node * reverse( node * head)
//		{
//			node * p= head;
//			node * prev=NULL , * next=NULL,*temp=NULL;
//			
//			while(p!=NULL)
//			{ 
//		    	next=p->right;
//				p->right=prev;
//				prev=p;
//				p=next;		
//				
//					
//			}
//			return prev;
//			
//		}
  node * reverse (node * head)
  {
  	int b[30];int i=0;
  	node * q= head;
  	while(q!=NULL)
  	{
  		b[i++]=q->data;
  		q=q->right;
  	
	}
	 
	q=head;
	while(q!=NULL)
	{
		q->data=b[--i];
		q=q->right;
		
		
	}
	return head;
  }

     node *dreverse(node * head )
     {
     	int d;
     	node * tail = head;
     	node * p= head;
     	while(tail->right!=NULL)
     	{
     		tail=tail->right;
		}
		 
	   while(p!=tail)
	   {
	   	d=p->data;
	   	p->data=tail->data;
	   	tail->data=d;
	   	p=p->right;
	   	tail=tail->left;
	   }
	   return head;
	 }

		
};

int main()
{ node *head=NULL;
head=head->create(head,1);
head=head->create(head,2);
head=head->create(head,3);
head=head->create(head,4);
head=head->create(head,5);
head->print(head);
cout<<"\nreversal\n";
head=head->reverse(head);
//head=head->dreverse(head);

head->print(head);


	return 0;
}
