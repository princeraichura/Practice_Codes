#include <iostream>
using namespace std;

int main() {
    int z;
    cin>>z;
    int x,y;
    while (z--){
        cin>>x>>y;
        if(x%y){
            if(y<2*x)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
	return 0;
}

