#include<bits/stdc++.h>
using namespace std;
//#define ll long long
int main()
{
    //set,unset,flip
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int xors=a^b^c;
        cout<<xors<<"\n";
    }
    return 0;
}