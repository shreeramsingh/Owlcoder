#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<vector<int>>ans;
    vector<int>temp(32,0);
    //computing binary number into it
    for(int i=0;i<32;i++){
        for(int j=0;j<n;j++){
            if(v[i]&(1<<j)){
                temp[j]++;
            }
        }
        ans.push_back(temp);
    }
    int q;
    cin>>q;
    int l,r;
    while(q--)
    {
        cin>>l>>r;
        int anss=0;
        if(l==0){
            for(int i=0;i<32;i++){
                if(ans[r][i]==r+1) anss|=(1<<i);
            }
        }else{
            int len=r-l+1;
            for(int i=0;i<32;i++){
                if((ans[r][i]-ans[l-1][i])==len) anss|=(1<<i);
            }
        }
        cout<<anss<<"\n";
    }
    return 0;
}