#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a,b;
    cin>>a;
    int A[1000];
    for(int i=0;i<a;i++)
    {
        cin>>A[i];
    }
    cin>>b;
    for(int i=a;i<a+b;i++)
    {
        cin>>A[i];
    }

    sort(A,A+(a+b));
    int c=0;
    for(int i=0;i<a+b;i++)
    {
        if(A[i]!=A[i+1])
             c++;
    }
    if(n == c)
        cout << "I become the guy." <<endl;
    else
        cout << "Oh, my keyboard!" << endl;
    
    return 0;

}
