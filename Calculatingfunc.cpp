#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll t)
{ 
    ll sum = 0;
    for(ll i =1;i<=t;i++)
    {
      sum += pow(-1,i)*i; 
    }
    cout<<sum<<endl;
}
int main() 
{   ll t;
    cin>>t;
    solve(t);
    return 0;
}
