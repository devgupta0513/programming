
#include<bits/stdc++.h>
using namespace std;
class node

{
	public:
	int data;
	node *next;
	
	node(){
	}
		node(int value)
		{  
		    
			data=value;
		    this->next=NULL;
		}
	void insert(node * root, int value )
	{
		
		if(root->data==NULL)
		{
			root = new node(value);
			
		}
		else 
		{
			node * p = new node (value);
			root->next=p;
			p->next=NULL;      
			  
		}

	   
	   
	   
	}
};
int main()
{   
node * root= new node(10);
root->insert(root,50);
cout<<root->data<<" ";
cout<<root->next->data;

	return 0;
}
