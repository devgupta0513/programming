#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reverseString(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

int main() {
    cout << "Client Output:" << endl;
    cout << "Reversed string: " << reverseString("Hello, World!") << endl;
    cout << "Isha More 0827CS211102" << endl;

    return 0;
}
