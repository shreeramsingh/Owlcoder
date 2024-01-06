#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        // vector<int>v(n);
        // for(int i=0;i<n;i++){
        //     cin>>v[i];
        // }
        int ans=a^b;
        cout<<ans<<endl;
    }
    return 0;
}