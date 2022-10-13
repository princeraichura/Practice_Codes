#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int temp=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            //cout<<a[i]<<endl;
        }
        // sort(a,a+n);

        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[j]==a[k] && a[k]!=0){
                    temp++;
                    a[k]=0;
                }
            }
        }
        cout<<n-temp<<endl;
    }
    
	// your code goes here
	return 0;
}
