// C++ program to create a global function as a friend
// function of some class
#include <iostream>
using namespace std;

class base {
private:
	int private_variable;

protected:
	int protected_variable;

public:
	base()
	{
		private_variable = 10;
		protected_variable = 99;
	}
	
	// friend function declaration
	friend void friendFunction(base &d);
};


// friend function definition
void friendFunction(base &g)
{
	cout << "Private Variable: " << g.private_variable
		<< endl;
	cout << "Protected Variable: " << g.protected_variable;
}

// driver code
int main()
{
	base object1;
	friendFunction(object1);

	return 0;
}

