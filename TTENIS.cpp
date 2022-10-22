#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    string s;
	    cin>>s;
	    int c=0;
	    int d=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='1')
	        {
	            c++;
	        }
	        else
	        {
	            d++;
	        }
	        
	    }
	    if(c>d)
	    {
	        cout<<"WIN"<<endl;
	    }
	    else
	    {
	        cout<<"LOSE"<<endl;
	    }
	}
	
	return 0;
}

