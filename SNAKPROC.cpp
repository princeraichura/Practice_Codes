#include <iostream>
using namespace std;

int main() {    
    int r;
    cin>>r;
    while(r--){
        int l;
        cin>>l;
        string str;
        cin>>str;
        int val=0;
        for(int i=0;i<l;i++){
            if(str[i]=='H'){
            val++;
            }
            else if(str[i]=='T'){
            val--;
            }
            else
            break;
        }
        if(val==0){
        cout<<"Valid"<<endl;
        }
        else
        cout<<"Invalid"<<endl;
    }
	return 0;
}
