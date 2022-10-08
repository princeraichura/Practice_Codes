#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z,tmp;
        cin>>x>>y>>z;
            tmp=(x+y)/z;
        if(tmp%2==0)
        cout<<"CHEF"<<endl;
        else cout<<"COOK"<<endl;
    }
	// your code goes here
	return 0;
}
