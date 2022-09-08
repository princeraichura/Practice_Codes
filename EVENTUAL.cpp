#include <iostream>
using namespace std;

int main() {
    int t; cin>>t; 
    while(t--)
    {
        int n ; cin>>n ; 
        int count = 0 , result = 0 ;
        string s; cin>>s; 
        for (int i =0 ; i<n ; i++)
        {
            for (int j =0; j< n ; j++)
            {
                if (s[i] == s[j])
                {
                    count++;
                }
            }
            if (count%2 != 0 )
            {
                result++; 
                cout<<"NO"<<endl ; 
                break;
            }
        }
        if (result == 0 )
        {
            cout<<"YES"<<endl;
        }
    }
	// your code goes here
	return 0;
}