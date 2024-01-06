#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a=n&&3;
        long long o=n^3;
        cout<<(a+o)<<"\n";
    }
    return 0;
}