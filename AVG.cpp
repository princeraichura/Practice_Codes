#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,v;
        cin>>n>>k>>v;
        int sum=0,temp,avg;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            sum=sum+a;
            // avg=sum/n;
        }
    	temp = v*(n+k)-sum;
    	avg=temp/k;
    	    if(temp%k == 0 && temp>0){
    	        cout<<avg<<endl;
    	    }
    	    else{
    	        cout<<"-1"<<endl;
    	    }
    }
	return 0;
}
