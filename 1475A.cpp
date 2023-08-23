#include<iostream>
typedef long long int ll;
using namespace std;
int main()
{
    ll t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        if((n&(n-1))==0){ //bitwise and operation
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}
