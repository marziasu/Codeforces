#include<iostream>
using namespace std;
int main()
{
    int n,j,taxi=0,m[5]={0};
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>j;
        m[j]++;
    }
    taxi=m[4];
    taxi+=m[3];

    m[1]=m[1]-m[3];
    if(m[1]<0) m[1]=0;
    taxi+=m[2]/2;
    if(m[2]%2==0) m[2]=0;
    else{
        m[2]=1;
        m[1]=m[1]+m[2]*2;
    }
    if(m[1]%4==0){
        taxi+=m[1]/4;
    }
    else taxi+=m[1]/4 +1;
    cout<<taxi<<endl;
}
