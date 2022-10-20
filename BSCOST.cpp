
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d=0,m=0;
        cin>>a>>b>>c;
        string s;
        cin>>s;
        
        for(int i=0;i<a;i++){
           
           if(s[i]=='0')d++;
           else m++;
        }
       if(m==0||d==0){
           cout<<"0"<<endl;
       }
       else cout<<min(b,c)<<endl;
    }

    return 0;
}

