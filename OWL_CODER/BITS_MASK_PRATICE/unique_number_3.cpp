#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int ans=0;
    for(int i=0;i<32;i++){
        int ocnt=0;
        for(int j=0;j<n;j++){
            if(A[j]&(1<<i)>0)
            ocnt++;
        }
        if(ocnt%3!=0)
        ans=ans|(1<<i);
    }
    cout<<ans<<endl;
    return 0;
}