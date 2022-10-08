#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            // cout<<arr[i];
        }
        sort(arr,arr+n);
        int temp=0,count=1;
        for(int j=0;j<n-1;j++){
            if(arr[j]==arr[j+1])
            count++;
            else{
                temp=max(temp,count);
                count=1;
        // cout<<endl;
            }
        }
    temp=max(temp,count);
    cout<<n-temp<<endl;
    }
	// your code goes here
	return 0;
}
