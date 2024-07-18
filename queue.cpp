#include <iostream>
using namespace std;
#define max 10
int queue[max];
int front=-1,rear=-1;
void insert(int x)
{
	if (rear==max-1)
	cout<<"the queue is full"<<endl;
	else
		{
			if(front==-1 &&rear== -1)
			{
				front=0;
				rear=0;
				queue[rear]=x;
			}
			else 
			{
				rear++;
				queue[rear]=x;
			}
		}
}
void del()
{
	if(front==-1 || front>rear)
	cout<<"queue is empty "<<endl;
	else
	{
		 front++;
	}
}
void print()
{
	for(int i=front ;i<=rear;i++)
	cout<<queue[i]<<endl;
}
int main()
{
	  
	 insert(10);
	 insert(20);
 	 insert(30);
	cout<<"queue item are : " <<endl;
	print();
		cout<<"items of new queue are :  "<<endl;
		del();
		del();
	 	print();
	return 0;
}
