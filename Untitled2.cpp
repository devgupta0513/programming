#include<iostream>
using namespace std;
class A
{public :
	void show()
	{
		cout<<"class A"<<endl;
	}
};
class B: public A
{public :
	void show()
	{
		cout<<"class B"<<endl;
	}
};
class c: public  B
{public :
	void show()
	{
		cout<<"class c"<<endl;
	}
};
int main()
{
	c a;
	a.show();
	return 0;
}
