#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
	cout<<"inside swap function "<<*a<<"     "<<*b<<endl;
	
}
int main()

{
	int a=6;
	int &b=a;
	cout<<b;
	b=10;
	cout<<a;
	
	
	
	
	
	
//	int a=6,b=5;
//	cout<<"in main funtion "<<&a<<"   "<<&b<<endl;
//	swap(&a,&b);
//	cout<<a<<endl;
//	cout<<b<<endl;
//	cout<<*b<<endl;
//	return 0;
//int a[5]={0,5,69,8,5};
//int * b= a;
//cout<<b<<endl;
//cout<<(b+2);


 

return 0;
}
