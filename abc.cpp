#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int lens,cnt,a[100];
        cin>>lens;
        for(int i=0;i<lens;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            cnt++;
        }
        if(cnt>1)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
    }
}