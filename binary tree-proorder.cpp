#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node * left;
	struct node * right;
};

 struct node *  create_node(int value)
 {
 	struct node *n=(struct node *)malloc(sizeof(struct node));

 	n->data=value;
 	n->left=NULL;
	n->right=NULL;
	cout<<n<<endl;

  return n;
 }
 
 void linking(struct node *left,struct node *root,struct node *right)
 {
 	root->left=left;
 	root->right=right;
 }
 
//struct node * binary_tree()
//{
//	
//	struct node * p1=create_node(4);
//	struct node * p2=create_node(2);
//	struct node * p3=create_node(6);
//	struct node * p4=create_node(1);
//	struct node * p5=create_node(3);
//	struct node * p6=create_node(5);
//	struct node * p7=create_node(7);
//	 linking(p2,p1,p3);
//	 linking(p4,p2,p5);
//	 linking(p6,p3,p7);
//	 
//	 return p1;
//	 
//}
void preorder(struct node *root)
{
	if(root!=NULL)
	{
		cout<<root->data;
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data;
	}
}
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data;
	   inorder(root->right);
	}
}
bool bst(struct node * root)
{ static struct node * prev = NULL;
	if(root!=NULL)
	{
		if(!bst(root->left))
		{
			return false;
		}
		if(prev!=NULL && root->data<=prev->data)
		{
			return false;
		}
		cout<<root->data;
		prev=root;
		bst(root->right);
	}
	else
	{
		
		return true;
	}
	
}
struct node * searching ( struct node *p,int key)
	{
		if(p==NULL)
		{
			return NULL;
		}
		if(key==p->data)
		{
			return p;
		}
		else if(key>p->data)
		{
			return searching(p->right,key);
		}
		else
		return searching(p->left,key);
		
	}
	void insertion (struct node * p, int value)
	{
		struct node * prev=NULL;
	
		while(p!=NULL)
		{ 
		prev=p;
			if(p->data==value)
			{
				cout<<"data already present \n";
				break;
				
			}
			else if(value<p->data)
			{
				p=p->left;
			}
			else
			{
				p=p->right;
			}
			
		};
		struct node * q= create_node(value);
		if(value<prev->data)
		{
			prev->left=q;
		}
		else
		prev->right=q;
		
	}
	
struct node *	ipreprocessor(struct node * root)
    { 
	root=root->left;
		 while(root->right!=NULL)
		 {
		 	root=root->right;
		 }
		 return root;
	}	
	
	struct node * deleted ( struct node * root,int value)
	{ struct node *lr;
		if(root==NULL)
		{return NULL;}
		if(root->left==NULL && root->right==NULL)
		{free(root);
        return NULL;}
		if(value<root->data){
			
			root->left=deleted(root->left,value);
		}
		 else if(value>root->data){
			root->right=deleted(root->right,value);
		}
		else
		{
			lr= ipreprocessor(root);
			root->data=lr->data;
			root->left=deleted(root->left,lr->data);
		}
		
	}




struct node *inOrderPredecessor(struct node* root){
    root = root->left;
    while (root->right!=NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deleteNode(struct node *root, int value){

    struct node* iPre;
    if (root == NULL){
        return NULL;
    }
    if (root->left==NULL&&root->right==NULL){
        free(root);
        return NULL;
    }

    //searching for the node to be deleted
    if (value < root->data){
        root-> left = deleteNode(root->left,value);
    }
    else if (value > root->data){
        root-> right = deleteNode(root->right,value);
    }
    //deletion strategy when the node is found
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}
int main()
{  
//struct node * root=binary_tree();
//	cout<<"preorder :-> "<<endl;
//	preorder(root);
//	cout<<"\n postorder :-> "<<endl;
//	postorder(root);
//	cout<<"\n inorder :-> "<<endl;
//	inorder(root);
//	cout<<endl;
//	cout<<bst(root);
//	cout<<endl;
//	cout<<"element founding"<<endl;
//	struct node *n= searching(root,8);
//	if(n==NULL)cout<<"\n not found"<<endl;
//	else cout<<n->data<<endl;
//	cout<<endl;
struct node * p1=create_node(5);
cout<<p1;
//insertion(p1,7);
//	insertion(p1,6);
//	insertion(p1,4);
//	insertion(p1,3);
//	insertion(p1,5);
//	insertion(p1,2);
//	cout<<"\n inorder :-> "<<endl;
//	inorder(p1);
//	cout<<endl<<endl;
//	deleted(p1,5);
//		cout<<"\n inorder :-> "<<endl;
//		inorder(p1);
	return 0;
}
