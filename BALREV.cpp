#include <iostream>
using namespace std;


void solve(){
    int n;cin >> n;
    char temp;
    
    int jumlah0=0, jumlah1=0;
    for(int i=0; i<n; i++){
        cin >> temp;
        if(temp == '0')
            jumlah0++;
        else
            jumlah1++;
    }
    
    for(int i=0; i<jumlah0; i++){
        cout << 0;
    }
    
    for(int i=0; i<jumlah1; i++){
        cout << 1;
    }
    
    printf("\n");
}

int main() {
	// your code goes here
	int t;cin >> t;
	
	while(t--)
	solve();
	return 0;
}

