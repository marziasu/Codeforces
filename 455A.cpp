#include<iostream>
#include<algorithm>
typedef long long int ll;
ll dp[100005]={0};
ll dp2[100005];
using namespace std;

int main()
{
    ll a,b,i;
    cin>>a;
    for(i=0;i<a;i++){
        cin>>b;
        dp[b]++;
    }
    dp2[0]=0;
    dp2[1]=dp[1];
    for(i=2;i<=100000;i++){
        dp2[i]=max(dp2[i-1],dp2[i-2]+dp[i]*i);
    }
    cout<<dp2[100000];
}
