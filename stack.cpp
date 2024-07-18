#include<iostream>
#define max 10
using namespace std;
int top=-1;
int stack[max];
void push(int x)
{
	if(top==max-1)
	cout<<"the stack is full "<<endl;
	else
	{
	stack[++top]=x;
	}
	 
}
void pop()
	{
	if(top==-1)
	cout<<"the stack is empty"<<endl;
	else
		top--;
	}	
void display()
	{
	for(int i= top; i<=max-1;i++)
	cout<<stack[i]<<endl;
	}
	
	int main ()
	{  
		push(10);
		push(20);
		push(30);
	cout<<"stack items are : " <<endl;
	display();
		cout<<"items of new stack are :  "<<endl;
		pop();
		pop();
		display();
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
