#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int p=1,q=2;
	    int temp1=0,temp2=0;
	    while(a>=0)
	    {
	        a=a-p;
	        p=p+2;
	        temp1++;
	    }
	    while(b>=0)
	    {
	        b=b-q;
	        q+=2;
	        temp2++;
	    }
	    if(temp1>temp2)
	    cout<<"Limak"<<endl;
	    else if(temp1<temp2)
	    cout<<"Bob"<<endl;
	    else if(temp1==temp2)
	    cout<<"Bob"<<endl;
	}
	
	return 0;
}
