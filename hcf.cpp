#include <iostream>
using namespace std;
//int hcf(int a,int b)
//{ 
//	if(a<b)
//	 return(a,b-a);
//	else if(b<a)
//	 return(a-b,b);
//	 else if(a==b)
//	  return a;
//}	
//	int hcf(int a, int b) {
//    while (b != 0) {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
int hcf(int a, int b) {
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a; 
}
	

int main()
{ int hcf1;
 int a,b;
 cin>>a>>b;
 hcf1=hcf(a,b);
 cout<<hcf1;
 return 0;
	
}
