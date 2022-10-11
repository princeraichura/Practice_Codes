#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,b;
        cin>>n>>b;
        int ss=0,temp=0;
        while(n--){
            int w,h,p;
            cin>>w>>h>>p;
            if(p<=b){
                temp=w*h;
                if(temp>ss){
                    ss=temp;
                }
            }
        }
        if(ss==0)
            cout<<"no tablet"<<endl;
        else
            cout<<ss<<endl;
    }
	// your code goes here
	return 0;
}
