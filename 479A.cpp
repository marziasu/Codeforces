#include<iostream>
#include<algorithm> //for max function
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int r1=a+b+c;
    int r2=a*b*c;
    int r3=a+b*c;
    int r4=(a+b)*c;
    int r5=a*(b+c);

    int ans=max(r5,max(r4,max(r3,max(r2,r1))));
    cout<<ans;
}
