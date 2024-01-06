#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back;
#define ll long long;
int main()
{
    int L,R;
    cin>>L>>R;
    int LXR = L ^ R;
    cout<<LXR<<endl;
    int msbPos = 0;
    while (LXR)
    {
        msbPos++;
        LXR=LXR>>1;
    }
    cout<<(1 << msbPos) -1;
    return 0;
}