#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	// your code goes here
	double a,b;
	char ch;
	cin>>a>>b>>ch;
	if(ch=='+') cout<<a+b<<endl;
	else if(ch=='-') cout<<a-b<<endl;
	else if(ch=='*') cout<<a*b<<endl;
	else if(ch=='/') cout<<fixed<<double(a/b)<<endl;
	return 0;
}