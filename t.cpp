#include<iostream>
using namespace std;
 bool prime(int n)
 { int i=2;
 	if(n==1||n==2)
 	return false;
 	if(n==i)
 	return true;
 	if(n%i==0)
 	return false;
 	i++;
 }hrt hrighirhgihd8ghelrjghperyhgl herp98glerjhg
 
 
 int main()
 {
 	int n,count;
 	cout<<"enter the number : ";
 	cin>>n;
 	cout<<"the prime number in range 1 to "<<n<<" is ";
 	
 	for(int i=1;i<=n;i++)
 	{
 		if(prime(i))
		 {
		    cout<<i<<" ";
		 	count++;
		 };
	 }
	 cout<<"\nnumber of prime in range 1 to "<<n<<" is "<<count;
 	
 	return 0;
 }
