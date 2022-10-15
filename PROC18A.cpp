#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, k;
	cin>>t;
	while(t--) {
	    cin>>n>>k;
	    int a[n],max=0,sum;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++) {
	        sum=0;
	       for(int j=i;j<k+i;j++) {
	           sum=sum+a[j];
	           if(max<sum){
	               max=sum;
	           }
	           if(j==n-1){
	               break;
	           }
	       }
	    }
	    cout<<max<<endl;
	}
	return 0;
}

