#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,ans;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int j=0;j<n;j++){
            if(arr[j]==arr[j+1])
                j++;
            else
                ans=arr[j];
        }
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
