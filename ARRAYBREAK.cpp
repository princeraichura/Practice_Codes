#include <iostream>
typedef long long ll;
using namespace std;

int main() {
    ll t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll x=0;
        for(ll j=0;j<n;j++){
            if(arr[j]%2==0){
                x++;
            }
        }
            if(x==n){
                cout<<"0"<<endl;
            }
            else{
                cout<<x<<endl;
            }
            // if(x>y){
            //     minimum=n-max(x,y);
            //     cout<<minimum;
            // }
            // else{
            //     minimum=n,max(x,y);
            //     cout<<minimum;
            // }
        // cout<<endl;
    }
	// your code goes here
	return 0;
}
