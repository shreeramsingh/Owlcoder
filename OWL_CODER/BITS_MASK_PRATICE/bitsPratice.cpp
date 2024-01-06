#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   // int bits=n&1;
   //>> right-shift which is divide by 2
   //<< left-shift means its multiply by 2
    n=n<<1;
    cout<<n<<" ";
    return 0;
}