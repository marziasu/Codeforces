#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
#define ll long long int
map<int,int>mp;

int go(int n,int a,int b,int c)
{
    if(n==0)
        return 0;
    if(n<0)
        return INT_MIN;
    if(mp.count(n))
        return mp[n];
    return mp[n]=1+max(go(n-a,a,b,c),max(go(n-b,a,b,c),go(n-c,a,b,c)));
}
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<go(n,a,b,c)<<endl;
}
