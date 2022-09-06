#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    
    while(t--){
        int n,k;cin>>n>>k;
        int arr[n];
        
        for(int i=1;i<=n;i++){
            cin>>arr[n];
            
            if(k>=arr[n]){
                k = k-arr[n];
            cout<<1;
        }
        
        else{
            cout<<0;
        }
        
        }
        cout<<'\n';
    }
	return 0;
}
