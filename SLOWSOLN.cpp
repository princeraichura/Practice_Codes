#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int p,q,r, result=0;
        cin>>p>>q>>r;
        while(p-- && r>0){
            if(r>=q){
                result=result+pow(q,2);
                r=r-q;
            }
            else{
                result=result+pow(r,2);
                break;
            }
        }
        cout<<result<<endl;
    }
	// your code goes here
	return 0;
}
