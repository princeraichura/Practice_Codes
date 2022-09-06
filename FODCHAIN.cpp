#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int e,k,level=0;
        cin>>e>>k;
        while(e!=0){
            e=e/k;
            level++;
        }
        cout<<level<<endl;
    }

	return 0;
}
