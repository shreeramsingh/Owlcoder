#include<bits/stdc++.h>
using namespace std;
int getithBits(int n, int i){
    int mask=n<<i;
    int ans=n & mask;
    if(ans==0){
        return 0;
    }
    else
    return 1;
}
void setithBit(int n,int i){
    int mask=1<<i;
    int ans=n|mask;
    cout<<"After setoperation: "<<ans<<endl;
}
void clearithBit(int& n,int i){
    int mask=~(1<<i);
    int ans=n&mask;
    cout<<"After clearoperation: "<<ans<<endl;
}
void updateithBit(int& n, int i,int target){
    clearithBit(n,i);
    int mask=target<<i;
    n=n|mask;
    cout<<"After updating: "<<n<<endl;
}
void clearLastIBits(int n, int i){
    int mask=(-1<< i);
    n = n& mask;
    cout<<"after clearing last ith bits"<<n<<endl;
}
bool checkPowerOf2(int n){
    if((n &(n-1))==0)
    return true;
    else
    return false;
}
int countSetsBitsFast(int n){
    int cnt=0;
    while(n!=0){
        //remove last set bits
        n=(n &(n-1));
        cnt++;
    }
    return cnt;
}
void clearithBitRange(int n, int i, int j){
    int a=(-1 << (i+1));
    int b=(1<<j)-1;
    int mask=a|b;
    n=n&mask;
    cout<<"After clearing bits in range: "<<n<<endl;

}
int main()
{
    int n;
    cin>>n;
    if(n&1){
        cout<<"n is odd";
    }else{
        cout<<"n is even";
    }
}
