#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,sum=0,l=0;
	    cin>>n>>k;
	    vector<int>v(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        sum+=v[i];
	        if(sum<k)
	        {
	        l=i+1;
	        break;
	        }
	        sum-=k;
	    }
	    if(l==0)
	    cout<<"YES";
	    else cout<<"NO "<<l;
	    cout<<endl;
	}
	return 0;
}
