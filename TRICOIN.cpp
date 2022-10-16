#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	int n;
	cin>>n;
	int i;
	for( i=1;i<=n;i++){
	    for(int j=1;j<=i;j++){
	        n--;
	    }
	}
	cout<<(i-1)<<endl;
	
	t--;
	    
	}
	return 0;
}

