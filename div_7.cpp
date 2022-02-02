#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;
int main(){
    int t,rem;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%7==0)
        {cout<<n<<endl;}
        else
        {
            rem=n%10;
            for(int i=(n-rem);i<(n+n-rem);i++)
            {
                if(i%7==0)
                {cout<<i<<endl;
                break;}
            }
        }
    }
}