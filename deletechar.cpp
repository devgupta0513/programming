#include <iostream>kunal
using namespace std;
string delchar(string s, string c)
{
	if (c.length() > 1)
		cout << s;
	else
	{
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == c[0])
				s.erase(i, 1);
		}
		cout << s;
	}
}

int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	delchar(a, b);
	return 0;
}
