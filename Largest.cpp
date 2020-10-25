#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[120];

    for(int i;i<n;i++)
    {
        cin>>A[i];
    }
    int s=INT_MAX;
    for(int i;i<n;i++)
    {
        if(A[i]<s)
        {
         s=A[i];
        }

    }
    cout<<s;

}
