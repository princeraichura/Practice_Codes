#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int size,count=0,num=0;
        cin>>size;
        string r,s;
        cin>>r>>s;
        for(int j=0;j<size;j++)
        {
            if(r[j]=='1')
            count=count+1;
        }
        for(int j=0;j<size;j++)
        {
            if(s[j]=='1')
            num=num+1;
        }
        if(count==num)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	return 0;
}

