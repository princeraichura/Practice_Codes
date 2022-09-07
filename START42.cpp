#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,count=1;
        cin>>n;
        // int arr[n];
        string str;
        cin>>str;
        for(int j=0;j<n-2;j++){
            if(str[j]=='1' && str[j+1]=='0'){
                count++;
            }
        }
        cout<<count<<endl;
    }
    
    
	// your code goes here
	return 0;
}
