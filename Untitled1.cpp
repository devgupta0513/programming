#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node * next;
};



node * create(int value)
{
	 struct node * n = (struct node *)malloc(sizeof(struct node));
	n->data=value;
	n->next=NULL;
	 return n;
    
}
node * insert(node * root,int value)
{
	node * n = (struct node *)malloc(sizeof(struct node));
	n->data=value;
	root->next=n;
	n->next=NULL;
	 return root;
    
}
int main()
{
	struct node *root = create(10);
	root=insert(root,50);
	cout<<root->next->data;
	return 0;
}

