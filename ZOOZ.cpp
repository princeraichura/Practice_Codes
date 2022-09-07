#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<"1";
            for (int i=0;i<n-2;i++)
            {
                cout<<"0";
            }
            cout<<"1";
        }
        else
        {
            for(int i=0;i<n/2;i++)
            {
                cout<<"0";
            }
            cout<<"1";
            for(int i=0;i<n/2;i++)
            {
                cout<<"0";
            }
        }
        cout<<"\n";
	}
}
