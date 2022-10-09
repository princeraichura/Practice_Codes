#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,q;
	cin>>n>>q;
	long int a[n],b[n];
	for(int i=1;i<=n;i++)
	    cin>>a[i];
        //cout<<a[i];
    for(int j=1;j<=n;j++)
        cin>>b[j];
        //cout<<b[j];
    while(q--)
    {
        int l,r;
        long int s=0;
        cin>>l>>r;
        //cout<<l<<" "<<r<<endl;
        for(int y=l;y <=r;y++)
        {
            s+=a[y]*b[y];
        }
        cout<<s<<endl;
    }
	
	return 0;
}
