#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        char a[n];
        int temp=0;
        // char vow[5]={'a','e','i','o','u'};
        for(int j=0;j<n;j++){
            cin>>a[j];
            // cout<<a[j]<<" ";
        }
        // for(int p=0;p<5;p++){
        
        //     cout<<vow[p];
        // }
        // cout<<endl;
        
        for(int j=0;j<n;j++){
            // for(int k=0;k<5;k++){
            if(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u'){
            temp=0;
            }
                // if(temp>=4){
                //     ans=0;
                // }
                // else{
                //     ans=1;    
                // }
            else{
                temp++;
                // continue;
            }
            if(temp==4)
            break;
        }
        if(temp>=4)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
	// your code goes here
	return 0;
}

