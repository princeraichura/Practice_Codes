#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        // if(x==50 && y==50 || x==50 && z==50 || y==50 && z==50){
        //     cout<<"NOTA"<<endl;
        // }
        if(x>50)
            cout<<"A"<<endl;
        else if(y>50)
            cout<<"B"<<endl;
        else if(z>50)
            cout<<"C"<<endl;
        else
            cout<<"NOTA"<<endl;
    }
	// your code goes here
	return 0;
}
