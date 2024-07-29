  #include<iostream>
using namespace std;

class print
{
	public:
	int i,j,b;
	int count=0;
	
	
		
		print( int n)
		{
			int c2=n*n;
			
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if(j<i)
					cout<<" ";
					else
					cout<<++count<<" ";
				}
					
				for(int k=0;k<n;k++)
				{
					
					if(k<i)
					cout<<"";
					else{
   							
						cout<<++c2<<" ";
					}
					
				}
				
			
			c2=c2-(((n-i)*2)-1);
				
				cout<<endl;
			}
		}
		
		
};
int main()
{
	print p(4);
	
	
	
	return 0;
}
