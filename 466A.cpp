#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,a,b,sum=0;
    cin>>n>>m>>a>>b;
    if(m*a<b){
        cout<<n*a<<endl;
    }
    else{
        cout<<(n/m)*b+min((n%m)*a,b)<<endl;
    }
    return 0;
}
