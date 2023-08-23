#include<iostream>
#include<vector>
typedef long long int ll;
using namespace std;

int main()
{
    /*ll n,i,x,d,m,j;
    ///number of shop
    cin>>n;
    vector<ll>sh;
    /// price of bottle in a shop
    for(i=0;i<n;i++){
        cin>>x;
        sh.push_back(x);
    }
    ///number of coin on i-th day
    cin>>d;
    for(i=0;i<d;i++){
        ll count=0;
        cin>>m;
        for(j=0;j<n;j++){
            if(sh[j]<=m) count++;
        }
        cout<<count<<endl;
    } time_limit_exceed*/

    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>f(1e5+1);

    for(int i=0;i<n;i++){
        cin>>v[i];
        f[v[i]]++;
    }
    vector<int>pf(1e5+1); /// prefix sum of the frequency array
    pf[0]=0;
    for(int i=1;i<=1e5;i++){
        pf[i]=pf[i-1]+f[i];
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        if(x>1e5){
            cout<<n<<endl;
        }
        else{
            cout<<pf[x]<<endl;
        }

    }
    return 0;
}
