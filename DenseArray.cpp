#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(ll a[],ll n)
{   float x,m,z,l=0;
    for(ll i=0;i<n;i++)
    {
        ll j=i+1;
        if(j<n)
        {
            x = max(a[i],a[i+1]);
            m = min(a[i],a[i+1]);
            z = x/m;
            while(z>2)
            {
                m = m*2;
                z = x/m;
                l++;
            }
        }
    }
      cout<<l<<endl;
}
int main() 
{   ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        solve(A,n);
    }
    return 0;
}
